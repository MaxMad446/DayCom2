// Auto-generated module | 2026-05-11T20:09:08.861472
#include <iostream>
#include <vector>

int compute_905() {
    int base = 167;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_905() << std::endl;
    return 0;
}
