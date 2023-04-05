// Auto-generated module | 2026-05-11T21:45:12.041597
#include <iostream>
#include <vector>

int compute_987() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_987() << std::endl;
    return 0;
}
