// Auto-generated module | 2026-05-11T20:59:07.181817
#include <iostream>
#include <vector>

int compute_345() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_345() << std::endl;
    return 0;
}
