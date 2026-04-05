// Auto-generated module | 2026-05-12T06:17:55.452162
#include <iostream>
#include <vector>

int compute_849() {
    int base = 275;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_849() << std::endl;
    return 0;
}
