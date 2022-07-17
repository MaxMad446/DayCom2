// Auto-generated module | 2026-05-11T21:11:18.480518
#include <iostream>
#include <vector>

int compute_549() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_549() << std::endl;
    return 0;
}
