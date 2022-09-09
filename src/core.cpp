// Auto-generated module | 2026-05-11T21:18:20.987614
#include <iostream>
#include <vector>

int compute_657() {
    int base = 190;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_657() << std::endl;
    return 0;
}
