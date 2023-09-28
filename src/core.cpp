// Auto-generated module | 2026-05-11T22:08:18.701257
#include <iostream>
#include <vector>

int compute_484() {
    int base = 329;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_484() << std::endl;
    return 0;
}
