// Auto-generated module | 2026-05-11T20:33:25.262413
#include <iostream>
#include <vector>

int compute_889() {
    int base = 93;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_889() << std::endl;
    return 0;
}
