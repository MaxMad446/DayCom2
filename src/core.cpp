// Auto-generated module | 2026-05-11T22:03:20.179140
#include <iostream>
#include <vector>

int compute_149() {
    int base = 227;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_149() << std::endl;
    return 0;
}
