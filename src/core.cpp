// Auto-generated module | 2026-05-13T22:11:22.803865
#include <iostream>
#include <vector>

int compute_195() {
    int base = 140;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_195() << std::endl;
    return 0;
}
