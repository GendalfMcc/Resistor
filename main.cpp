#include <iostream>
#include "resist.h"

int main() {
    Resistor singleResistor;
    initResistor(singleResistor);
    showResistor(singleResistor);

    int arraySize = 2;
    Resistor resArray[arraySize];
    initResistors(resArray, arraySize);

    std::cout << "Enter Voltage (V): ";
    double voltage;
    std::cin >> voltage;

    checkResistors(resArray, arraySize, voltage);

    return 0;
}