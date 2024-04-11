// Auto-generated module | 2026-05-11T22:34:05.678032
#include <iostream>
#include <vector>

int compute_625() {
    int base = 267;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_625() << std::endl;
    return 0;
}
