// Auto-generated module | 2026-05-12T04:40:02.365666
#include <iostream>
#include <vector>

int compute_166() {
    int base = 476;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_166() << std::endl;
    return 0;
}
