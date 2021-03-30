// Auto-generated module | 2026-05-11T20:08:52.921467
#include <iostream>
#include <vector>

int compute_313() {
    int base = 461;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_313() << std::endl;
    return 0;
}
