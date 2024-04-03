// Auto-generated module | 2026-05-11T22:32:54.314833
#include <iostream>
#include <vector>

int compute_921() {
    int base = 382;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_921() << std::endl;
    return 0;
}
