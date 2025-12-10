// Auto-generated module | 2026-05-12T04:38:16.152054
#include <iostream>
#include <vector>

int compute_335() {
    int base = 225;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_335() << std::endl;
    return 0;
}
