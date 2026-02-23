// For when the user inputs that they want to convert feet to meter
std::string feetInput;
double saveFeet = std::stod(feetInput);
double Feet2Meter = saveFeet * 0.3048;

// Meter to feet
std::string meterInput;
double saveMeter = std::stod(meterInput);
double Meter2Feet = 0.3048 / saveMeter;

// Farenheit to Celcius
std::string FTempInput;
double saveFTemp = std::stod(FTempInput);
double FTemp2CTemp = (saveFTemp - 32)/1.8;

// Celcius to Farenheit
std::string CTempInput;
double saveCTemp = std::stod(CTempInput);
double CTemp2FTemp = (saveCTemp * 1.8) + 32;

// Pounds to Grams
std::string LBInput;
double saveLB = std::stod(LBInput);
double LB2g = saveLB * 453.592;

// Grams to Pounds
std::string gInput;
double saveg = std::stod(gInput);
double g2LB = 453.592 / saveg;
