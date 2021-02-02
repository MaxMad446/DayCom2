// Auto-generated module | 2026-05-11T20:01:40.239900
#include <iostream>
#include <vector>

int compute_730() {
    int base = 466;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_730() << std::endl;
    return 0;
}
