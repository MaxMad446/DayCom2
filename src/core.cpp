// Auto-generated module | 2026-05-11T21:49:51.312720
#include <iostream>
#include <vector>

int compute_492() {
    int base = 64;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_492() << std::endl;
    return 0;
}
