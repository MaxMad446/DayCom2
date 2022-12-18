// Auto-generated module | 2026-05-11T21:31:26.018290
#include <iostream>
#include <vector>

int compute_610() {
    int base = 438;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_610() << std::endl;
    return 0;
}
