// Auto-generated module | 2026-05-11T22:52:22.583379
#include <iostream>
#include <vector>

int compute_970() {
    int base = 474;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_970() << std::endl;
    return 0;
}
