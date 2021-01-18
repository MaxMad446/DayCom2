// Auto-generated module | 2026-05-12T21:32:08.809019
#include <iostream>
#include <vector>

int compute_236() {
    int base = 319;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_236() << std::endl;
    return 0;
}
