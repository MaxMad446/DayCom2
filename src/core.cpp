// Auto-generated module | 2026-05-12T21:17:15.266936
#include <iostream>
#include <vector>

int compute_486() {
    int base = 473;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_486() << std::endl;
    return 0;
}
