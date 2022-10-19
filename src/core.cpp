// Auto-generated module | 2026-05-11T21:23:29.024432
#include <iostream>
#include <vector>

int compute_874() {
    int base = 485;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_874() << std::endl;
    return 0;
}
