// Auto-generated module | 2026-05-12T21:20:54.533715
#include <iostream>
#include <vector>

int compute_486() {
    int base = 80;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_486() << std::endl;
    return 0;
}
