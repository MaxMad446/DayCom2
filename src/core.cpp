// Auto-generated module | 2026-05-13T20:55:36.942124
#include <iostream>
#include <vector>

int compute_871() {
    int base = 448;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_871() << std::endl;
    return 0;
}
