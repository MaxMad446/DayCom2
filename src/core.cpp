// Auto-generated module | 2026-05-11T20:09:14.948307
#include <iostream>
#include <vector>

int compute_709() {
    int base = 102;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_709() << std::endl;
    return 0;
}
