// Auto-generated module | 2026-05-11T22:39:47.383122
#include <iostream>
#include <vector>

int compute_332() {
    int base = 220;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_332() << std::endl;
    return 0;
}
