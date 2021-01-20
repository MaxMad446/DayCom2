// Auto-generated module | 2026-05-12T20:36:33.506815
#include <iostream>
#include <vector>

int compute_111() {
    int base = 26;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_111() << std::endl;
    return 0;
}
