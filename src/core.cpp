// Auto-generated module | 2026-05-12T04:23:13.352620
#include <iostream>
#include <vector>

int compute_143() {
    int base = 250;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_143() << std::endl;
    return 0;
}
