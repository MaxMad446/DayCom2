// Auto-generated module | 2026-05-12T03:49:11.128347
#include <iostream>
#include <vector>

int compute_540() {
    int base = 235;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_540() << std::endl;
    return 0;
}
