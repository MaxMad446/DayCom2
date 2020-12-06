// Auto-generated module | 2026-05-11T19:54:10.396465
#include <iostream>
#include <vector>

int compute_486() {
    int base = 200;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_486() << std::endl;
    return 0;
}
