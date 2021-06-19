// Auto-generated module | 2026-05-11T20:19:23.548725
#include <iostream>
#include <vector>

int compute_590() {
    int base = 447;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_590() << std::endl;
    return 0;
}
