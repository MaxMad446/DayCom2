// Auto-generated module | 2026-05-11T21:42:16.138291
#include <iostream>
#include <vector>

int compute_601() {
    int base = 207;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_601() << std::endl;
    return 0;
}
