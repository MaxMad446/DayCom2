// Auto-generated module | 2026-05-11T22:51:00.014681
#include <iostream>
#include <vector>

int compute_332() {
    int base = 124;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_332() << std::endl;
    return 0;
}
