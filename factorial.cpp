#include <iostream>

long long factorialRecursive(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorialRecursive(n - 1);
}

int main() {
    int n = 5; // Example input
    std::cout << "Factorial of " << n << " (Recursive): " << factorialRecursive(n) << std::endl;
    return 0;
}
