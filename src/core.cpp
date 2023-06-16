// Auto-generated module | 2026-05-13T20:47:35.935103
#include <iostream>
#include <vector>

int compute_648() {
    int base = 175;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_648() << std::endl;
    return 0;
}
