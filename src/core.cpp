// Auto-generated module | 2026-05-11T20:51:27.102874
#include <iostream>
#include <vector>

int compute_685() {
    int base = 247;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_685() << std::endl;
    return 0;
}
