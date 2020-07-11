// Auto-generated module | 2026-05-11T19:34:37.883891
#include <iostream>
#include <vector>

int compute_534() {
    int base = 95;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_534() << std::endl;
    return 0;
}
