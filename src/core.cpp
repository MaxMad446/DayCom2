// Auto-generated module | 2026-05-11T20:10:40.110763
#include <iostream>
#include <vector>

int compute_143() {
    int base = 482;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_143() << std::endl;
    return 0;
}
