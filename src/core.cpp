// Auto-generated module | 2026-05-11T21:57:38.116544
#include <iostream>
#include <vector>

int compute_991() {
    int base = 328;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_991() << std::endl;
    return 0;
}
