// Auto-generated module | 2026-05-11T20:08:07.393861
#include <iostream>
#include <vector>

int compute_484() {
    int base = 175;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_484() << std::endl;
    return 0;
}
