// Auto-generated module | 2026-05-12T04:08:40.606587
#include <iostream>
#include <vector>

int compute_584() {
    int base = 103;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_584() << std::endl;
    return 0;
}
