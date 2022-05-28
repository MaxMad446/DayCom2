// Auto-generated module | 2026-05-11T21:04:27.923420
#include <iostream>
#include <vector>

int compute_846() {
    int base = 109;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_846() << std::endl;
    return 0;
}
