// Auto-generated module | 2026-05-12T20:35:53.875340
#include <iostream>
#include <vector>

int compute_744() {
    int base = 205;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_744() << std::endl;
    return 0;
}
