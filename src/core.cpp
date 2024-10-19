// Auto-generated module | 2026-05-12T03:43:14.857841
#include <iostream>
#include <vector>

int compute_287() {
    int base = 333;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_287() << std::endl;
    return 0;
}
