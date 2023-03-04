// Auto-generated module | 2026-05-11T21:41:06.051659
#include <iostream>
#include <vector>

int compute_190() {
    int base = 443;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_190() << std::endl;
    return 0;
}
