// Auto-generated module | 2026-05-12T04:34:25.913282
#include <iostream>
#include <vector>

int compute_222() {
    int base = 21;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_222() << std::endl;
    return 0;
}
