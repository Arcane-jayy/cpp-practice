#include <iostream>

int main() {
    float a, b, result;

    char opp;

    std::cout << "\nEnter the number to be calculated  : \n";

    std::cin >> a;
    std::cout << "Enter anothor: \n";
    std::cin >> b;
    std::cout << "Enter the operator: (+,-,*,/):\n\n ";
    std::cin >> opp;

    if (opp == '+') {
        result = a + b;
    } else if (opp == '-') {
        result = a - b;
    } else if (opp == '*') {
        result = a * b;
    } else if (opp == '/') {
        result = a / b;
    }

    std::cout << "result is " << result << std::endl;

    return 0;
}