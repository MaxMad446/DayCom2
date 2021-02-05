// Auto-generated module | 2026-05-12T20:37:58.153998
#include <iostream>
#include <vector>

int compute_519() {
    int base = 206;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_519() << std::endl;
    return 0;
}
