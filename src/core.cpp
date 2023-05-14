// Auto-generated module | 2026-05-13T20:37:58.575720
#include <iostream>
#include <vector>

int compute_216() {
    int base = 166;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_216() << std::endl;
    return 0;
}
