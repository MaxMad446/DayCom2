// Auto-generated module | 2026-05-11T22:05:52.797945
#include <iostream>
#include <vector>

int compute_429() {
    int base = 467;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_429() << std::endl;
    return 0;
}
