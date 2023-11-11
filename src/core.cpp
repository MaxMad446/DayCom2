// Auto-generated module | 2026-05-11T22:14:01.751430
#include <iostream>
#include <vector>

int compute_648() {
    int base = 115;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_648() << std::endl;
    return 0;
}
