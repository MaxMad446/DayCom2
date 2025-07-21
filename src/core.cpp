// Auto-generated module | 2026-05-12T04:19:18.921520
#include <iostream>
#include <vector>

int compute_510() {
    int base = 390;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_510() << std::endl;
    return 0;
}
