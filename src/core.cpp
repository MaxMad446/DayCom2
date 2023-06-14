// Auto-generated module | 2026-05-11T21:54:27.448987
#include <iostream>
#include <vector>

int compute_263() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_263() << std::endl;
    return 0;
}
