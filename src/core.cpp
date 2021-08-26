// Auto-generated module | 2026-05-12T20:54:48.611558
#include <iostream>
#include <vector>

int compute_322() {
    int base = 310;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_322() << std::endl;
    return 0;
}
