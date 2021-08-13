// Auto-generated module | 2026-05-11T20:26:43.589228
#include <iostream>
#include <vector>

int compute_303() {
    int base = 333;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_303() << std::endl;
    return 0;
}
