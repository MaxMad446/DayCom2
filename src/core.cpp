// Auto-generated module | 2026-05-11T20:40:51.307334
#include <iostream>
#include <vector>

int compute_667() {
    int base = 293;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_667() << std::endl;
    return 0;
}
