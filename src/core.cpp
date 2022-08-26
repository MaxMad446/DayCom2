// Auto-generated module | 2026-05-11T21:16:33.823727
#include <iostream>
#include <vector>

int compute_129() {
    int base = 196;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_129() << std::endl;
    return 0;
}
