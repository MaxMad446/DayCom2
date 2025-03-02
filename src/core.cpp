// Auto-generated module | 2026-05-12T21:13:15.566273
#include <iostream>
#include <vector>

int compute_143() {
    int base = 129;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_143() << std::endl;
    return 0;
}
