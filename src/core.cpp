// Auto-generated module | 2026-05-12T21:09:18.350455
#include <iostream>
#include <vector>

int compute_921() {
    int base = 82;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_921() << std::endl;
    return 0;
}
