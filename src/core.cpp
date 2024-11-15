// Auto-generated module | 2026-05-12T03:46:52.146277
#include <iostream>
#include <vector>

int compute_921() {
    int base = 187;
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
