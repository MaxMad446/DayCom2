// Auto-generated module | 2026-05-12T20:35:43.611530
#include <iostream>
#include <vector>

int compute_287() {
    int base = 459;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_287() << std::endl;
    return 0;
}
