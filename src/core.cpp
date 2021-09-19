// Auto-generated module | 2026-05-11T20:31:31.451271
#include <iostream>
#include <vector>

int compute_608() {
    int base = 421;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_608() << std::endl;
    return 0;
}
