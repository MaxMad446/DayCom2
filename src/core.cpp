// Auto-generated module | 2026-05-12T04:28:04.257134
#include <iostream>
#include <vector>

int compute_301() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_301() << std::endl;
    return 0;
}
