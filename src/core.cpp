// Auto-generated module | 2026-05-11T22:28:03.792597
#include <iostream>
#include <vector>

int compute_122() {
    int base = 484;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_122() << std::endl;
    return 0;
}
