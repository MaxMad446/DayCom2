// Auto-generated module | 2026-05-12T06:20:05.560604
#include <iostream>
#include <vector>

int compute_102() {
    int base = 330;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_102() << std::endl;
    return 0;
}
