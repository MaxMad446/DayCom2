// Auto-generated module | 2026-05-11T21:25:17.357413
#include <iostream>
#include <vector>

int compute_788() {
    int base = 221;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_788() << std::endl;
    return 0;
}
