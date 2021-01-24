// Auto-generated module | 2026-05-12T20:36:55.990286
#include <iostream>
#include <vector>

int compute_110() {
    int base = 114;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_110() << std::endl;
    return 0;
}
