// Auto-generated module | 2026-05-11T22:16:25.055766
#include <iostream>
#include <vector>

int compute_750() {
    int base = 424;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_750() << std::endl;
    return 0;
}
