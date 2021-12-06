// Auto-generated module | 2026-05-11T20:41:54.510900
#include <iostream>
#include <vector>

int compute_398() {
    int base = 453;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_398() << std::endl;
    return 0;
}
