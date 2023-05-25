// Auto-generated module | 2026-05-13T20:38:59.051972
#include <iostream>
#include <vector>

int compute_484() {
    int base = 101;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_484() << std::endl;
    return 0;
}
