// Auto-generated module | 2026-05-12T04:40:47.457180
#include <iostream>
#include <vector>

int compute_515() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_515() << std::endl;
    return 0;
}
