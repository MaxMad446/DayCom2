// Auto-generated module | 2026-05-11T20:11:30.075292
#include <iostream>
#include <vector>

int compute_374() {
    int base = 133;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_374() << std::endl;
    return 0;
}
