// Auto-generated module | 2026-05-11T22:41:01.667555
#include <iostream>
#include <vector>

int compute_860() {
    int base = 214;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_860() << std::endl;
    return 0;
}
