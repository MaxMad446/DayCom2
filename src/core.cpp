// Auto-generated module | 2026-05-12T04:27:47.953320
#include <iostream>
#include <vector>

int compute_513() {
    int base = 310;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_513() << std::endl;
    return 0;
}
