// Auto-generated module | 2026-05-11T22:16:24.047851
#include <iostream>
#include <vector>

int compute_580() {
    int base = 182;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_580() << std::endl;
    return 0;
}
