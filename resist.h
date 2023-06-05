#ifndef RESIST_H
#define RESIST_H

struct Resistor {
    double resistance;  // Номінальне значення електричного опору (Ом)
    double max_power;   // Максимальна потужність розсіювання (Вт)
};

void initResistor(Resistor& res);
void initResistors(Resistor* resArray, int size);
void showResistor(const Resistor& res);
void showResistors(const Resistor* resArray, int size);
void checkResistors(const Resistor* resArray, int size, double voltage);

#endif