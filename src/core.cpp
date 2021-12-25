// Auto-generated module | 2026-05-12T21:05:06.187723
#include <iostream>
#include <vector>

int compute_561() {
    int base = 479;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_561() << std::endl;
    return 0;
}
