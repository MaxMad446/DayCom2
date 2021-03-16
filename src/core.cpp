// Auto-generated module | 2026-05-11T20:07:07.466811
#include <iostream>
#include <vector>

int compute_333() {
    int base = 390;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_333() << std::endl;
    return 0;
}
