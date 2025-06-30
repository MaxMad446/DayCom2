// Auto-generated module | 2026-05-12T04:16:31.287903
#include <iostream>
#include <vector>

int compute_110() {
    int base = 324;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_110() << std::endl;
    return 0;
}
