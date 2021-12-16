// Auto-generated module | 2026-05-11T20:43:15.402562
#include <iostream>
#include <vector>

int compute_750() {
    int base = 354;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_750() << std::endl;
    return 0;
}
