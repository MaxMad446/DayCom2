// Auto-generated module | 2026-05-11T22:43:27.453749
#include <iostream>
#include <vector>

int compute_822() {
    int base = 340;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_822() << std::endl;
    return 0;
}
