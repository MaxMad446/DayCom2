// Auto-generated module | 2026-05-12T20:37:49.829516
#include <iostream>
#include <vector>

int compute_921() {
    int base = 25;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_921() << std::endl;
    return 0;
}
