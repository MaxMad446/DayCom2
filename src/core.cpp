// Auto-generated module | 2026-05-11T22:18:09.988205
#include <iostream>
#include <vector>

int compute_565() {
    int base = 326;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_565() << std::endl;
    return 0;
}
