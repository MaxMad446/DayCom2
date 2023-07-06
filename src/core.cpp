// Auto-generated module | 2026-05-11T21:57:27.293075
#include <iostream>
#include <vector>

int compute_601() {
    int base = 319;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_601() << std::endl;
    return 0;
}
