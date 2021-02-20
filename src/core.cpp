// Auto-generated module | 2026-05-11T20:04:07.569416
#include <iostream>
#include <vector>

int compute_179() {
    int base = 324;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_179() << std::endl;
    return 0;
}
