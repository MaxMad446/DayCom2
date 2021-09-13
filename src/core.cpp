// Auto-generated module | 2026-05-11T20:30:43.053383
#include <iostream>
#include <vector>

int compute_941() {
    int base = 106;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_941() << std::endl;
    return 0;
}
