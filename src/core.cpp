// Auto-generated module | 2026-05-12T21:32:59.579293
#include <iostream>
#include <vector>

int compute_230() {
    int base = 361;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_230() << std::endl;
    return 0;
}
