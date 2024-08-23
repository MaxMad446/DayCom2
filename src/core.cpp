// Auto-generated module | 2026-05-11T22:51:24.982454
#include <iostream>
#include <vector>

int compute_405() {
    int base = 115;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_405() << std::endl;
    return 0;
}
