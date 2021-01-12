// Auto-generated module | 2026-05-11T19:59:02.223195
#include <iostream>
#include <vector>

int compute_630() {
    int base = 287;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_630() << std::endl;
    return 0;
}
