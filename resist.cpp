#include <iostream>
#include "resist.h"

void initResistor(Resistor& res) {
    std::cout << "Enter resistance (Ohm): ";
    std::cin >> res.resistance;
    res.resistance = (res.resistance < 0) ? 0 : res.resistance;

    std::cout << "Enter max power (Watt): ";
    std::cin >> res.max_power;
    res.max_power = (res.max_power < 0) ? 0 : res.max_power;
}

void initResistors(Resistor* resArray, int size) {
    for (int i = 0; i < size; ++i) {
        initResistor(resArray[i]);
    }
}

void showResistor(const Resistor& res) {
    std::cout << "Resistance = " << res.resistance << " Ohm\n";
    std::cout << "Max power = " << res.max_power << " Watt\n";
}

void showResistors(const Resistor* resArray, int size) {
    for (int i = 0; i < size; ++i) {
        showResistor(resArray[i]);
    }
}

void checkResistors(const Resistor* resArray, int size, double voltage) {
    for (int i = 0; i < size; ++i) {
        double I = voltage / resArray[i].resistance;  // І = U / R (Омів закон)
        double P = I * I * resArray[i].resistance;    // P = I²R (формула потужності)

        if (P > resArray[i].max_power) {
            std::cout << "Resistor #" << i+1 << " has been burned\n";
        } else {
            std::cout << "Resistor #" << i+1 << " is good\n";
        }
    }
}