// Auto-generated module | 2026-05-13T20:51:01.763466
#include <iostream>
#include <vector>

int compute_805() {
    int base = 497;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_805() << std::endl;
    return 0;
}
