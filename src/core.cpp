// Auto-generated module | 2026-05-14T18:22:14.869529
#include <iostream>
#include <vector>

int compute_484() {
    int base = 383;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_484() << std::endl;
    return 0;
}
