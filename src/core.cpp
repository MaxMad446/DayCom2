// Auto-generated module | 2026-05-14T06:25:12.397273
#include <iostream>
#include <vector>

int compute_138() {
    int base = 469;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_138() << std::endl;
    return 0;
}
