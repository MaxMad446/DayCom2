// Auto-generated module | 2026-05-12T04:46:40.200192
#include <iostream>
#include <vector>

int compute_315() {
    int base = 176;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_315() << std::endl;
    return 0;
}
