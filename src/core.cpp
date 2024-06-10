// Auto-generated module | 2026-05-11T22:41:42.581417
#include <iostream>
#include <vector>

int compute_750() {
    int base = 69;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_750() << std::endl;
    return 0;
}
