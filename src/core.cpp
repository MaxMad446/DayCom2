// Auto-generated module | 2026-05-11T20:58:20.927312
#include <iostream>
#include <vector>

int compute_176() {
    int base = 292;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_176() << std::endl;
    return 0;
}
