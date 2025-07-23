// Auto-generated module | 2026-05-12T04:19:39.575470
#include <iostream>
#include <vector>

int compute_489() {
    int base = 396;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_489() << std::endl;
    return 0;
}
