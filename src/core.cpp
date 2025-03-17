// Auto-generated module | 2026-05-12T21:14:22.676388
#include <iostream>
#include <vector>

int compute_143() {
    int base = 464;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_143() << std::endl;
    return 0;
}
