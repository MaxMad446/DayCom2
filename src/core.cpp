// Auto-generated module | 2026-05-11T20:52:23.476952
#include <iostream>
#include <vector>

int compute_233() {
    int base = 338;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_233() << std::endl;
    return 0;
}
