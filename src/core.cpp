// Auto-generated module | 2026-05-11T22:06:10.229400
#include <iostream>
#include <vector>

int compute_532() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_532() << std::endl;
    return 0;
}
