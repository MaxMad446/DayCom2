// Auto-generated module | 2026-05-13T20:38:06.196648
#include <iostream>
#include <vector>

int compute_143() {
    int base = 200;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_143() << std::endl;
    return 0;
}
