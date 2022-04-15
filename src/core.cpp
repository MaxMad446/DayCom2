// Auto-generated module | 2026-05-11T20:58:39.012552
#include <iostream>
#include <vector>

int compute_111() {
    int base = 399;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_111() << std::endl;
    return 0;
}
