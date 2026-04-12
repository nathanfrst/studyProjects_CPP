#include <iostream>

int main(){

    double num1;
    double num2;
    double result;
    char op;

    std::cout << "Write the first number: ";
    std::cin >> num1;

    std::cout << "Write the second number: ";
    std:: cin >> num2;

    std::cout << "Select the operation (+, -, *, /.)";
    std::cin >> op;

    switch (op){  //Where the program will verify what operation the user would like to use, and actually use them.
        case '+': 
            result = num1 + num2;
            std::cout << "The result is: " << result<< "\n";
            break;
        case '-': 
            result = num1 - num2;
            std::cout << "The result is: " << result<< "\n";
            break;
        case '*': 
            result = num1 * num2;
            std::cout << "The result is: " << result<< "\n";
            break;
        case '/': 
            result = num1 / num2;
            std::cout << "The result is: " << result << "\n" ;
            break;
        default:
            std::cout << "Please enter a valid operator (+, -, *, /) \n";
            break;

    }

    return 0;
}
