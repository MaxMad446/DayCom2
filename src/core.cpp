// Auto-generated module | 2026-05-13T20:29:40.642363
#include <iostream>
#include <vector>

int compute_286() {
    int base = 261;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_286() << std::endl;
    return 0;
}
