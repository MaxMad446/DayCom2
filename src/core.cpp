// Auto-generated module | 2026-05-11T19:55:26.015370
#include <iostream>
#include <vector>

int compute_611() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_611() << std::endl;
    return 0;
}
