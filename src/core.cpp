// Auto-generated module | 2026-05-11T19:38:56.647749
#include <iostream>
#include <vector>

int compute_631() {
    int base = 462;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_631() << std::endl;
    return 0;
}
