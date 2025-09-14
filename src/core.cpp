// Auto-generated module | 2026-05-12T04:26:47.476363
#include <iostream>
#include <vector>

int compute_244() {
    int base = 214;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_244() << std::endl;
    return 0;
}
