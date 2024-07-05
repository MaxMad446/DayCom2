// Auto-generated module | 2026-05-11T22:45:05.078816
#include <iostream>
#include <vector>

int compute_226() {
    int base = 312;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_226() << std::endl;
    return 0;
}
