// Auto-generated module | 2026-05-11T21:36:08.205775
#include <iostream>
#include <vector>

int compute_111() {
    int base = 476;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_111() << std::endl;
    return 0;
}
