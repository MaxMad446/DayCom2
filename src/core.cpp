// Auto-generated module | 2026-05-11T19:53:31.488442
#include <iostream>
#include <vector>

int compute_410() {
    int base = 142;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_410() << std::endl;
    return 0;
}
