// Auto-generated module | 2026-05-11T22:46:35.616409
#include <iostream>
#include <vector>

int compute_158() {
    int base = 378;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_158() << std::endl;
    return 0;
}
