// Auto-generated module | 2026-05-12T04:14:34.418726
#include <iostream>
#include <vector>

int compute_706() {
    int base = 252;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_706() << std::endl;
    return 0;
}
