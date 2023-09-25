// Auto-generated module | 2026-05-13T20:55:49.991900
#include <iostream>
#include <vector>

int compute_446() {
    int base = 462;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_446() << std::endl;
    return 0;
}
