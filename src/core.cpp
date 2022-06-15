// Auto-generated module | 2026-05-11T21:06:49.919197
#include <iostream>
#include <vector>

int compute_880() {
    int base = 255;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_880() << std::endl;
    return 0;
}
