// Auto-generated module | 2026-05-13T20:58:33.999922
#include <iostream>
#include <vector>

int compute_338() {
    int base = 258;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_338() << std::endl;
    return 0;
}
