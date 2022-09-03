// Auto-generated module | 2026-05-11T21:17:37.147585
#include <iostream>
#include <vector>

int compute_614() {
    int base = 187;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_614() << std::endl;
    return 0;
}
