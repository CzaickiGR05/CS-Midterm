#include <iostream>
#include <iomanip>
#include <string>

int main() {

	std::cout << std::fixed << std::setprecision(3);
	std::string temp;

	std::cout << "welcome to CPP standard metric conversion! Please select which unit you would like to convert:" << std::endl;
	std::cout << "type d for distance" << std::endl;
	std::cout << "type m for mass" << std::endl;
	std::cout << "type t for temperature" << std::endl;
	std::string unit;
	std::getline(std::cin, unit);

	if (unit == "m") {
		std::cout << "converting mass." << std::endl;
	}
	else if(unit == "d") {
		std::cout << "converting distance." << std::endl;
	}
	else if (unit == "t") {
		std::cout << "converting temperature." << std::endl;
	}
	else {
		std::cout << "invalid input." << std::endl;
		return 0;
	}

	std::cout << "What are you converting to?" << std::endl;
	std::cout << "type m for metric" << std::endl;
	std::cout << "type s for standard" << std::endl;
	std::string type;
	std::getline(std::cin, type);

	if (unit == "m") {
		std::cout << "converting to metric." << std::endl;
	}
	else if (unit == "s") {
		std::cout << "converting to standard." << std::endl;
	}else {
		std::cout << "invalid input." << std::endl;
		return 0;
	}

	std::cout << "please type the ammount you want converted: \t" << std::endl;
	double value;
	std::getline(std::cin, temp);
	value = std::stod(temp);
	
	//if(){}
	
//	std::cout << << std::endl;

	return 1;
}