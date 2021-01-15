// Auto-generated module | 2026-05-12T21:31:58.899684
#include <iostream>
#include <vector>

int compute_143() {
    int base = 216;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_143() << std::endl;
    return 0;
}
