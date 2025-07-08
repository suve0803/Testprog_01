#include <iostream>
#include "mylib/simp_calc.h"

int main() {
    char op;
    int a, b;

    std::cout << "Enter operator (+ or -): ";
    std::cin >> op;

    std::cout << "Enter two integers: ";
    if (!(std::cin >> a >> b)) {
        std::cerr << "Invalid input.\n";
        return 1;
    }

    if (op == '+') {
        std::cout << a << " + " << b << " = " << add(a, b) << "\n";
    }
    else if (op == '-') {
        std::cout << a << " - " << b << " = " << sub(a, b) << "\n";
    }
    else {
        std::cerr << "Unknown operator.\n";
        return 1;
    }

    return 0;
}
