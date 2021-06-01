// Auto-generated module | 2026-05-12T20:47:32.933245
#include <iostream>
#include <vector>

int compute_602() {
    int base = 155;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_602() << std::endl;
    return 0;
}
