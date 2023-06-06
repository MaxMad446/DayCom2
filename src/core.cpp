// Auto-generated module | 2026-05-11T21:53:26.920395
#include <iostream>
#include <vector>

int compute_822() {
    int base = 32;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_822() << std::endl;
    return 0;
}
