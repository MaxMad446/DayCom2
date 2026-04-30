// Auto-generated module | 2026-05-12T06:21:22.159697
#include <iostream>
#include <vector>

int compute_970() {
    int base = 297;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_970() << std::endl;
    return 0;
}
