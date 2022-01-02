// Auto-generated module | 2026-05-11T20:45:23.891418
#include <iostream>
#include <vector>

int compute_168() {
    int base = 160;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_168() << std::endl;
    return 0;
}
