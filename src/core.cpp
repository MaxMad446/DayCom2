// Auto-generated module | 2026-05-12T21:09:28.514125
#include <iostream>
#include <vector>

int compute_531() {
    int base = 384;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_531() << std::endl;
    return 0;
}
