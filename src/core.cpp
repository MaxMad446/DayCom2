// Auto-generated module | 2026-05-13T21:02:24.554224
#include <iostream>
#include <vector>

int compute_111() {
    int base = 184;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_111() << std::endl;
    return 0;
}
