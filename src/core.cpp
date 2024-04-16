// Auto-generated module | 2026-05-11T22:34:43.035269
#include <iostream>
#include <vector>

int compute_953() {
    int base = 173;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_953() << std::endl;
    return 0;
}
