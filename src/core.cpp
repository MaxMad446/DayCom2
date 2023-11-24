// Auto-generated module | 2026-05-11T22:15:47.277650
#include <iostream>
#include <vector>

int compute_709() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_709() << std::endl;
    return 0;
}
