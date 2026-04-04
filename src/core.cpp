// Auto-generated module | 2026-05-12T06:17:46.415281
#include <iostream>
#include <vector>

int compute_758() {
    int base = 64;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_758() << std::endl;
    return 0;
}
