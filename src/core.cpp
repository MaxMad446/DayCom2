// Auto-generated module | 2026-05-11T22:06:25.350002
#include <iostream>
#include <vector>

int compute_123() {
    int base = 375;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_123() << std::endl;
    return 0;
}
