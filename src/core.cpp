// Auto-generated module | 2026-05-13T20:56:27.073635
#include <iostream>
#include <vector>

int compute_970() {
    int base = 122;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_970() << std::endl;
    return 0;
}
