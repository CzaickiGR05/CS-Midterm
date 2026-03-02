#include <iostream>
#include <iomanip>
#include <string>

int main() {

	//setup
	std::string input;
	double value;
	std::cout << std::fixed << std::setprecision(3);

	std::cout << "welcome to CPP standard metric conversion! Please select which unit you would like to convert to:" << std::endl;

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

	std::cout << "What are you converting?" << std::endl;
	std::cout << "type d for distance" << std::endl;
	std::cout << "type m for mass" << std::endl;
	std::cout << "type t for temperature" << std::endl;
	std::string unit;
	std::getline(std::cin, unit);
	if (unit == "m") {
		std::cout << "converting mass." << std::endl;

		// Pounds to Grams
		std::cout << "please type the ammount you want converted: \t";
		std::getline(std::cin, input);
		try {
			value = std::stod(input);
		}
		catch (std::exception& e) {
			std::cout << "value must be a number!" << std::endl;
			return 2;
		}

		if (unit == "m" && type == "m") {
			try {
				value = std::stod(input);
			}
			catch (std::exception& e) {
				std::cout << "value must be a number!" << std::endl;
				return 2;
			}
			if (value <= 0) {
				std::cout << "value must not be negative!" << std::endl;
				return 3;
			}
			else {
				double LB2g = value * 453.592;
				std::cout << LB2g << std::endl;
				return 0;
			}
		}

		// Grams to Pounds
		std::cout << "please type the ammount you want converted: \t";
		std::getline(std::cin, input);
		try {
			value = std::stod(input);
		}
		catch (std::exception& e) {
			std::cout << "value must be a number!" << std::endl;
			return 2;
		}
		if (unit == "m" && type == "s") {
			try {
				value = std::stod(input);
			}
			catch (std::exception& e) {
				std::cout << "value must be a number!" << std::endl;
				return 2;
			}
			if (value <= 0) {
				std::cout << "value must not be negative!" << std::endl;
				return 3;
			}
			else {
				double g2LB = 453.592 / value;
				std::cout << g2LB << std::endl;
				return 0;
			}
		}

	}
	else if (unit == "d") {
		std::cout << "converting distance." << std::endl;

		//Feet to meter
		std::cout << "please type the ammount you want converted: \t";
		std::getline(std::cin, input);
		try {
			value = std::stod(input);
		}
		catch (std::exception& e) {
			std::cout << "value must be a number!" << std::endl;
			return 2;
		}

		if (unit == "d" && type == "m") {
			try {
				value = std::stod(input);
			}
			catch (std::exception& e) {
				std::cout << "value must be a number!" << std::endl;
				return 2;
			}
			if (value <= 0) {
				std::cout << "value must not be negative!" << std::endl;
				return 3;
			}
			else {
				double Feet2Meter = value * 0.3048;
				std::cout << Feet2Meter << std::endl;
				return 0;
			}
		}

		// Meter to feet
		std::cout << "please type the ammount you want converted: \t";
		std::getline(std::cin, input);
		try {
			value = std::stod(input);
		}
		catch (std::exception& e) {
			std::cout << "value must be a number!" << std::endl;
			return 2;
		}

		if (unit == "d" && type == "s") {
			try {
				value = std::stod(input);
			}
			catch (std::exception& e) {
				std::cout << "value must be a number!" << std::endl;
				return 2;
			}
			if (value <= 0) {
				std::cout << "value must not be negative!" << std::endl;
				return 3;
			}
			else {
				double Meter2Feet = 0.3048 / value;
				std::cout << Meter2Feet << std::endl;
				return 0;
			}
		}

	}
	else if (unit == "t") {
		std::cout << "converting temperature." << std::endl;

		// Farenheit to Celcius
		std::string FTempInput;
		double saveFTemp = std::stod(FTempInput);
		double FTemp2CTemp = (saveFTemp - 32) / 1.8;


		// Celcius to Farenheit
		std::cout << "please type the ammount you want converted: \t";
		std::getline(std::cin, input);
		try {
			value = std::stod(input);
		}
		catch (std::exception& e) {
			std::cout << "value must be a number!" << std::endl;
			return 2;
		}

		if (unit == "t" && type == "s") {
			try {
				value = std::stod(input);
			}
			catch (std::exception& e) {
				std::cout << "value must be a number!" << std::endl;
				return 2;
			}
			if (value < -273.15) {
				std::cout << "Temperature cannot go below absolute zero!";
				return 4;
			}
			else {
				double CTemp2FTemp = (value * 1.8) + 32;
				std::cout << CTemp2FTemp << std::endl;
				return 0;
			}
		}

	}
	else {
		std::cout << "invalid input." << std::endl;
		return 1;
	}


	return 0;
}
