// Auto-generated module | 2026-05-12T21:20:07.425341
#include <iostream>
#include <vector>

int compute_117() {
    int base = 124;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_117() << std::endl;
    return 0;
}
