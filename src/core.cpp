// Auto-generated module | 2026-05-14T06:24:01.074675
#include <iostream>
#include <vector>

int compute_889() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_889() << std::endl;
    return 0;
}
