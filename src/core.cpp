// Auto-generated module | 2026-05-13T20:27:45.626356
#include <iostream>
#include <vector>

int compute_484() {
    int base = 44;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_484() << std::endl;
    return 0;
}
