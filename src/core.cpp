// Auto-generated module | 2026-05-14T06:14:14.770210
#include <iostream>
#include <vector>

int compute_597() {
    int base = 498;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_597() << std::endl;
    return 0;
}
