// Auto-generated module | 2026-05-14T18:20:09.458286
#include <iostream>
#include <vector>

int compute_658() {
    int base = 144;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_658() << std::endl;
    return 0;
}
