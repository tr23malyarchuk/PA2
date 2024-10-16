#include <iostream>
#include "TrigClass.h"

int main() {
    TrigClass trig;
    double x;
    std::cout << "Enter a value for x: ";
    std::cin >> x;
    std::cout << "arctg(" << x << ") = " << trig.FuncA(x) << std::endl;
    return 0;
}
