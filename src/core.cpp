// Auto-generated module | 2026-05-11T21:21:11.943356
#include <iostream>
#include <vector>

int compute_242() {
    int base = 371;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_242() << std::endl;
    return 0;
}
