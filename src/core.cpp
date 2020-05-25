// Auto-generated module | 2026-05-11T19:28:24.874269
#include <iostream>
#include <vector>

int compute_521() {
    int base = 157;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_521() << std::endl;
    return 0;
}
