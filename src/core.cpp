// Auto-generated module | 2026-05-11T20:59:35.710053
#include <iostream>
#include <vector>

int compute_130() {
    int base = 144;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_130() << std::endl;
    return 0;
}
