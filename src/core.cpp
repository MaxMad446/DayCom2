// Auto-generated module | 2026-05-12T21:26:08.385117
#include <iostream>
#include <vector>

int compute_658() {
    int base = 56;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_658() << std::endl;
    return 0;
}
