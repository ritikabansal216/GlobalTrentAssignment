#include <iostream>

int gcdRecursive(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcdRecursive(b, a % b);
}

int main() {
    int a = 56; // Example input
    int b = 98; // Example input
    std::cout << "GCD of " << a << " and " << b << " (Recursive): " << gcdRecursive(a, b) << std::endl;
    return 0;
}
