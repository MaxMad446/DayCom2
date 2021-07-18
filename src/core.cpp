// Auto-generated module | 2026-05-11T20:23:22.460252
#include <iostream>
#include <vector>

int compute_484() {
    int base = 499;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_484() << std::endl;
    return 0;
}
