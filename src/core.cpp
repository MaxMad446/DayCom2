// Auto-generated module | 2026-05-11T22:07:49.427095
#include <iostream>
#include <vector>

int compute_159() {
    int base = 129;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_159() << std::endl;
    return 0;
}
