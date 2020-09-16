// Auto-generated module | 2026-05-11T19:43:27.298698
#include <iostream>
#include <vector>

int compute_984() {
    int base = 471;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_984() << std::endl;
    return 0;
}
