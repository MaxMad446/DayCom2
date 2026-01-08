// Auto-generated module | 2026-05-12T04:42:23.651894
#include <iostream>
#include <vector>

int compute_143() {
    int base = 170;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_143() << std::endl;
    return 0;
}
