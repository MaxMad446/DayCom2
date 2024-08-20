// Auto-generated module | 2026-05-11T22:51:02.158997
#include <iostream>
#include <vector>

int compute_617() {
    int base = 474;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_617() << std::endl;
    return 0;
}
