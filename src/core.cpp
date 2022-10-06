// Auto-generated module | 2026-05-11T21:21:53.503692
#include <iostream>
#include <vector>

int compute_177() {
    int base = 450;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_177() << std::endl;
    return 0;
}
