// Auto-generated module | 2026-05-12T04:25:16.040611
#include <iostream>
#include <vector>

int compute_429() {
    int base = 141;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_429() << std::endl;
    return 0;
}
