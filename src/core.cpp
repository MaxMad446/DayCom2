// Auto-generated module | 2026-05-12T20:49:47.448418
#include <iostream>
#include <vector>

int compute_819() {
    int base = 101;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_819() << std::endl;
    return 0;
}
