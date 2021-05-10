// Auto-generated module | 2026-05-11T20:13:56.092115
#include <iostream>
#include <vector>

int compute_484() {
    int base = 62;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_484() << std::endl;
    return 0;
}
