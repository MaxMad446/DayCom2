// Auto-generated module | 2026-05-12T21:14:44.569564
#include <iostream>
#include <vector>

int compute_959() {
    int base = 484;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_959() << std::endl;
    return 0;
}
