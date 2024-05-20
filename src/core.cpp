// Auto-generated module | 2026-05-11T22:39:12.283020
#include <iostream>
#include <vector>

int compute_238() {
    int base = 205;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_238() << std::endl;
    return 0;
}
