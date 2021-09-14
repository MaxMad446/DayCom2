// Auto-generated module | 2026-05-11T20:30:47.241220
#include <iostream>
#include <vector>

int compute_423() {
    int base = 432;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_423() << std::endl;
    return 0;
}
