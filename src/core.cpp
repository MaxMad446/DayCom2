// Auto-generated module | 2026-05-11T21:49:09.365532
#include <iostream>
#include <vector>

int compute_867() {
    int base = 113;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_867() << std::endl;
    return 0;
}
