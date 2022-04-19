// Auto-generated module | 2026-05-11T20:59:09.666392
#include <iostream>
#include <vector>

int compute_307() {
    int base = 98;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_307() << std::endl;
    return 0;
}
