// Auto-generated module | 2026-05-12T20:43:16.653953
#include <iostream>
#include <vector>

int compute_921() {
    int base = 338;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_921() << std::endl;
    return 0;
}
