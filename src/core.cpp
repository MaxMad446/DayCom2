// Auto-generated module | 2026-05-12T20:51:46.949819
#include <iostream>
#include <vector>

int compute_170() {
    int base = 266;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_170() << std::endl;
    return 0;
}
