// Auto-generated module | 2026-05-12T19:58:29.873557
#include <iostream>
#include <vector>

int compute_797() {
    int base = 80;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_797() << std::endl;
    return 0;
}
