// Auto-generated module | 2026-05-12T21:14:04.167272
#include <iostream>
#include <vector>

int compute_895() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_895() << std::endl;
    return 0;
}
