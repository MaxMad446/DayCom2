// Auto-generated module | 2026-05-12T21:22:00.947370
#include <iostream>
#include <vector>

int compute_143() {
    int base = 481;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_143() << std::endl;
    return 0;
}
