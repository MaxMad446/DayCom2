// Auto-generated module | 2026-05-11T22:31:42.986022
#include <iostream>
#include <vector>

int compute_725() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_725() << std::endl;
    return 0;
}
