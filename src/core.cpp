// Auto-generated module | 2026-05-11T20:29:17.122198
#include <iostream>
#include <vector>

int compute_184() {
    int base = 301;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_184() << std::endl;
    return 0;
}
