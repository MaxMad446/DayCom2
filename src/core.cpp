// Auto-generated module | 2026-05-11T21:36:33.834134
#include <iostream>
#include <vector>

int compute_106() {
    int base = 171;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_106() << std::endl;
    return 0;
}
