// Auto-generated module | 2026-05-14T06:16:16.682593
#include <iostream>
#include <vector>

int compute_921() {
    int base = 319;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_921() << std::endl;
    return 0;
}
