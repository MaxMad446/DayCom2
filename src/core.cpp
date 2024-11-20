// Auto-generated module | 2026-05-12T03:47:23.772323
#include <iostream>
#include <vector>

int compute_898() {
    int base = 359;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_898() << std::endl;
    return 0;
}
