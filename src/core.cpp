// Auto-generated module | 2026-05-12T21:37:02.800132
#include <iostream>
#include <vector>

int compute_226() {
    int base = 12;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_226() << std::endl;
    return 0;
}
