#include "TrigClass.h"
#include <cmath>

double TrigClass::FuncA(double x) {
    double result = 0.0;
    for (int i = 0; i < 3; ++i) {
        result += pow(-1, i) * pow(x, 2 * i + 1) / (2 * i + 1);
    }
    return result;
}
