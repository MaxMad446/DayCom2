// Auto-generated module | 2026-05-12T21:35:11.544024
#include <iostream>
#include <vector>

int compute_668() {
    int base = 134;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_668() << std::endl;
    return 0;
}
