#include <iostream>
#include <iomanip>
#include <string>

int main() {

	//setup
	std::cout << std::fixed << std::setprecision(3);
	std::cout << "welcome to CPP standard metric conversion! Please select which unit you would like to convert:" << std::endl;
	std::cout << "type d for distance" << std::endl;
	std::cout << "type m for mass" << std::endl;
	std::cout << "type t for temperature" << std::endl;
	std::string unit;
	std::getline(std::cin, unit);
	if (unit == "m") {
		std::cout << "converting mass." << std::endl;
	}
	else if (unit == "d") {
		std::cout << "converting distance." << std::endl;
	}
	else if (unit == "t") {
		std::cout << "converting temperature." << std::endl;
	}
	else {
		std::cout << "invalid input." << std::endl;
		return 1;
	}

	std::cout << "What are you converting to?" << std::endl;
	std::cout << "type m for metric" << std::endl;
	std::cout << "type s for standard" << std::endl;
	std::string type;
	std::getline(std::cin, type);
	if (type == "m") {
		std::cout << "converting to metric." << std::endl;
	}
	else if (type == "s") {
		std::cout << "converting to standard." << std::endl;
	}
	else {
		std::cout << "invalid input." << std::endl;
		return 1;
	}

	//actual data gathering
	std::cout << "please type the ammount you want converted: \t";
	std::string input;

	//if i delete this block there are string errors and I don't know why.
	double value;
	std::getline(std::cin, input);

	try {
		value = std::stod(input);
	}
	catch (std::exception& e) {
		std::cout << "value must be a number!" << std::endl;
		return 2;
	}

	//the following always causes errors:

	//Feet to meter
	double saveFeet;
	if (unit == "d" && type == "m") {
		try {
			saveFeet = std::stod(input);
		}
		catch (std::exception& e) {
			std::cout << "value must be a number!" << std::endl;
			return 2;
		}
		if (saveFeet <= 0) {
			std::cout << "value must not be negative!" << std::endl;
			return 3;
		}
		double Feet2Meter = saveFeet * 0.3048;
		std::cout << Feet2Meter << std::endl;
	}
	// Meter to feet
	double saveMeter;
	if (unit == "d" && type == "s") {
		try {
			saveMeter = std::stod(input);
		}
		catch (std::exception& e) {
			std::cout << "value must be a number!" << std::endl;
			return 2;
		}
		if (saveMeter <= 0) {
			std::cout << "value must not be negative!" << std::endl;
			return 3;
		}
		double Meter2Feet = 0.3048 / saveMeter;
		std::cout << Meter2Feet << std::endl;
	}


	// Farenheit to Celcius
	std::string FTempInput;
	double saveFTemp = std::stod(FTempInput);
	double FTemp2CTemp = (saveFTemp - 32) / 1.8;


	// Celcius to Farenheit
	double saveCTemp;
	if (unit == "t" && type == "s") {
		try {
			saveCTemp = std::stod(input);
		}
		catch (std::exception& e) {
			std::cout << "value must be a number!" << std::endl;
			return 2;
		}
		if (saveCTemp < -273.15) {
			std::cout << "Temperature cannot go below absolute zero!";
			return 4;
		}
		double CTemp2FTemp = (saveCTemp * 1.8) + 32;
		std::cout << CTemp2FTemp << std::endl;
	}
	// Pounds to Grams
	double saveLB;
	if (unit == "m" && type == "m") {
		try {
		saveLB = std::stod(input);
	}
	catch (std::exception& e) {
		std::cout << "value must be a number!" << std::endl;
		return 2;
	}
	if (saveLB <= 0) {
		std::cout << "value must not be negative!" << std::endl;
		return 3;
	}
	double LB2g = saveLB * 453.592;
	std::cout << LB2g << std::endl;
	}

	// Grams to Pounds
	double saveg;
	if(unit == "m" && type == "s") {
		try { saveg = std::stod(input); 
		}
		catch (std::exception& e) {
			std::cout << "value must be a number!" << std::endl;
			return 2;
		}
		if (saveg <= 0) {
			std::cout << "value must not be negative!" << std::endl;
			return 3;
		}
		double g2LB = 453.592 / saveg;
		std::cout << g2LB << std::endl;
	}


	return 0;
}
