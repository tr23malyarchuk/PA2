#include "TrigClass.h"
#include <cmath>

double TrigClass::FuncA(double x) {
    double result = 0.0;
    for (int n = 0; n < 10; ++n) {
        result += pow(-1, n) * pow(x, 2 * n + 1) / (2 * n + 1);
    }
    return result;
}
