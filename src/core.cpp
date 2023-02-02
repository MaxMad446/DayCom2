// Auto-generated module | 2026-05-13T20:29:37.689559
#include <iostream>
#include <vector>

int compute_805() {
    int base = 416;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_805() << std::endl;
    return 0;
}
