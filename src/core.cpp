// Auto-generated module | 2026-05-12T20:49:07.066993
#include <iostream>
#include <vector>

int compute_170() {
    int base = 373;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_170() << std::endl;
    return 0;
}
