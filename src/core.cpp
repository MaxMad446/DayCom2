// Auto-generated module | 2026-05-11T22:24:09.823064
#include <iostream>
#include <vector>

int compute_921() {
    int base = 190;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_921() << std::endl;
    return 0;
}
