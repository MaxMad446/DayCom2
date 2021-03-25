// Auto-generated module | 2026-05-12T21:37:26.703150
#include <iostream>
#include <vector>

int compute_141() {
    int base = 84;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_141() << std::endl;
    return 0;
}
