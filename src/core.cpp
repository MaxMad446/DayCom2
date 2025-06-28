// Auto-generated module | 2026-05-12T04:16:10.673413
#include <iostream>
#include <vector>

int compute_431() {
    int base = 267;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_431() << std::endl;
    return 0;
}
