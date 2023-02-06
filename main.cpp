#include <cmath>
#include <iostream>

float lb_to_kg(const int pounds);
float feet_inches_to_metres(const int feet, const int inches);
float body_mass_index(const float weight, const float height);
void print_result(const float bmi);

int main()
{
	int height_feet, height_inches;
	float weight_pounds, weight_kilograms, height_metres, calculated_body_mass_index;

	std::cout << "Weight:\nEnter your current weight (lb) \n> ";
	std::cin >> weight_pounds;

	std::cout << "\nHeight:\nEnter your current height (feet)\n> ";
	std::cin >> height_feet;

	std::cout << "Enter your current height (inches)\n> ";
	std::cin >> height_inches;

	weight_kilograms = lb_to_kg(weight_pounds);
	height_metres = feet_inches_to_metres(height_feet, height_inches);
	calculated_body_mass_index = body_mass_index(weight_kilograms, height_metres);

	print_result(calculated_body_mass_index);

	return 0;
}

// Convert pounds to kilograms
float lb_to_kg(const int pounds)
{
	return pounds / 2.205;
}

// Convert feet inches to metres
float feet_inches_to_metres(const int feet, const int inches)
{
	return (feet / 3.281) + (inches / 39.37);
}

// Calculate body mass index
float body_mass_index(const float weight, const float height)
{
	return weight / (height * height);
}

// Round to 1 decimal place
float round_bmi(const float unrounded_bmi)
{
	return round(unrounded_bmi * 100) / 100;
}

// Print BMI result
void print_result(const float bmi)
{
	float rounded_bmi = round_bmi(bmi);

	std::cout << "\nYour body mass index is " << rounded_bmi << ". ";

	if (bmi < 18.5)
	{
		std::cout << "You are underweight.\n";
	}

	else if (bmi < 25)
	{
		std::cout << "You are normal weight.\n";
	}

	else if (bmi < 30)
	{
		std::cout << "You are overweight.\n";
	}

	else if (bmi < 35)
	{
		std::cout << "You are obese.\n";
	}

	else
	{
		std::cout << "You are extremely obese.\n";
	}
}
