// Auto-generated module | 2026-05-12T21:14:55.648473
#include <iostream>
#include <vector>

int compute_877() {
    int base = 226;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_877() << std::endl;
    return 0;
}
