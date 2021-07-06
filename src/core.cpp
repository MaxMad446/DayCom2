// Auto-generated module | 2026-05-12T20:50:29.427492
#include <iostream>
#include <vector>

int compute_484() {
    int base = 201;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_484() << std::endl;
    return 0;
}
