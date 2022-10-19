// Auto-generated module | 2026-05-14T06:22:33.150209
#include <iostream>
#include <vector>

int compute_921() {
    int base = 268;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_921() << std::endl;
    return 0;
}
