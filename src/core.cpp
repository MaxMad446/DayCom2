// Auto-generated module | 2026-05-11T20:09:41.309235
#include <iostream>
#include <vector>

int compute_138() {
    int base = 195;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_138() << std::endl;
    return 0;
}
