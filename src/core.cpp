// Auto-generated module | 2026-05-11T21:26:38.478575
#include <iostream>
#include <vector>

int compute_952() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_952() << std::endl;
    return 0;
}
