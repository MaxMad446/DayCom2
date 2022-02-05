// Auto-generated module | 2026-05-11T20:49:51.943334
#include <iostream>
#include <vector>

int compute_244() {
    int base = 238;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_244() << std::endl;
    return 0;
}
