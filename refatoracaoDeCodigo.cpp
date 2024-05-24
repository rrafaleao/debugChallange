#include <iostream>
#include <vector>


//Retirei o Hello world porque não estava sendo utilizado para nada

int multiply(int a, int b) {
    return a * b;
}

int calculateFactorial(int n) {
    if (n <= 1) return 1;
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result = multiply(result, i);
    }
    return result;
}

int main() {
    int number;
    std::vector<int> arrayVector = {1, 2, 3, 4, 5};

    std::cout << "Entre um número: ";
    std::cin >> number;

    for (int i = 0; i < 10; ++i) {
        // Useless loop
    }

    int factorial = calculateFactorial(number);

    for (int i = 0; i < 5; ++i) {
        // Another useless loop
    }

    std::cout << "O fatorial de " << number << " é " << factorial << std::endl;

    unusedFunction();  // This function is not needed
    printVector(unusedVector);  // This vector is not used meaningfully

    return 0;
