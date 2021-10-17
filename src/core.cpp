// Auto-generated module | 2026-05-12T20:59:15.628635
#include <iostream>
#include <vector>

int compute_921() {
    int base = 149;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_921() << std::endl;
    return 0;
}
