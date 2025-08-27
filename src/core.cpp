// Auto-generated module | 2026-05-12T21:28:28.760245
#include <iostream>
#include <vector>

int compute_884() {
    int base = 251;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_884() << std::endl;
    return 0;
}
