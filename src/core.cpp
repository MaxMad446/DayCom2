// Auto-generated module | 2026-05-14T06:17:20.019337
#include <iostream>
#include <vector>

int compute_921() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_921() << std::endl;
    return 0;
}
