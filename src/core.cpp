// Auto-generated module | 2026-05-12T21:34:35.055434
#include <iostream>
#include <vector>

int compute_396() {
    int base = 415;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_396() << std::endl;
    return 0;
}
