// Auto-generated module | 2026-05-12T20:44:13.651695
#include <iostream>
#include <vector>

int compute_575() {
    int base = 45;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_575() << std::endl;
    return 0;
}
