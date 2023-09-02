// Auto-generated module | 2026-05-11T22:04:49.401802
#include <iostream>
#include <vector>

int compute_759() {
    int base = 71;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_759() << std::endl;
    return 0;
}
