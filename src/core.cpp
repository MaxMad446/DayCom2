// Auto-generated module | 2026-05-11T19:40:27.365616
#include <iostream>
#include <vector>

int compute_429() {
    int base = 330;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_429() << std::endl;
    return 0;
}
