// Auto-generated module | 2026-05-14T18:23:28.480273
#include <iostream>
#include <vector>

int compute_490() {
    int base = 314;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_490() << std::endl;
    return 0;
}
