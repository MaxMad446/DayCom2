// Auto-generated module | 2026-05-11T21:38:16.916687
#include <iostream>
#include <vector>

int compute_941() {
    int base = 10;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_941() << std::endl;
    return 0;
}
