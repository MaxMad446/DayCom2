// Auto-generated module | 2026-05-11T21:22:03.405447
#include <iostream>
#include <vector>

int compute_512() {
    int base = 77;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_512() << std::endl;
    return 0;
}
