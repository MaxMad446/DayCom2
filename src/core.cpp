// Auto-generated module | 2026-05-11T21:52:57.417836
#include <iostream>
#include <vector>

int compute_921() {
    int base = 58;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_921() << std::endl;
    return 0;
}
