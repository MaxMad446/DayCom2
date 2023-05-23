// Auto-generated module | 2026-05-13T20:38:46.342414
#include <iostream>
#include <vector>

int compute_143() {
    int base = 42;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_143() << std::endl;
    return 0;
}
