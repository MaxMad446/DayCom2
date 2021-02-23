// Auto-generated module | 2026-05-11T20:04:34.585645
#include <iostream>
#include <vector>

int compute_990() {
    int base = 300;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_990() << std::endl;
    return 0;
}
