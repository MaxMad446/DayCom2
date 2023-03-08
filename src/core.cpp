// Auto-generated module | 2026-05-11T21:41:41.203288
#include <iostream>
#include <vector>

int compute_164() {
    int base = 44;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_164() << std::endl;
    return 0;
}
