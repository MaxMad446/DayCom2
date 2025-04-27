// Auto-generated module | 2026-05-12T04:08:13.257594
#include <iostream>
#include <vector>

int compute_434() {
    int base = 396;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_434() << std::endl;
    return 0;
}
