// Auto-generated module | 2026-05-12T04:18:28.602506
#include <iostream>
#include <vector>

int compute_230() {
    int base = 422;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_230() << std::endl;
    return 0;
}
