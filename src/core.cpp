// Auto-generated module | 2026-05-11T20:25:42.501855
#include <iostream>
#include <vector>

int compute_106() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_106() << std::endl;
    return 0;
}
