#include <iostream>

int sumOfDigitsIterative(int n) {
    int sum = 0;
    n = std::abs(n); // Ensure the number is positive
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n = 12345; // Example input
    std::cout << "Sum of digits of " << n << " (Iterative): " << sumOfDigitsIterative(n) << std::endl;
    return 0;
}
