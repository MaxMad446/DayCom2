// Auto-generated module | 2026-05-11T21:35:11.387782
#include <iostream>
#include <vector>

int compute_100() {
    int base = 153;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_100() << std::endl;
    return 0;
}
