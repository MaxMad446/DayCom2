// Auto-generated module | 2026-05-11T21:42:14.569166
#include <iostream>
#include <vector>

int compute_921() {
    int base = 259;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_921() << std::endl;
    return 0;
}
