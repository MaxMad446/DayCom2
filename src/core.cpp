// Auto-generated module | 2026-05-11T20:30:06.097092
#include <iostream>
#include <vector>

int compute_575() {
    int base = 231;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_575() << std::endl;
    return 0;
}
