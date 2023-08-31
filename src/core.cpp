// Auto-generated module | 2026-05-11T22:04:32.853112
#include <iostream>
#include <vector>

int compute_531() {
    int base = 326;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_531() << std::endl;
    return 0;
}
