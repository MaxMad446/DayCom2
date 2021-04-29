// Auto-generated module | 2026-05-12T21:40:36.240921
#include <iostream>
#include <vector>

int compute_697() {
    int base = 466;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_697() << std::endl;
    return 0;
}
