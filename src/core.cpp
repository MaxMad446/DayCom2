// Auto-generated module | 2026-05-11T21:23:20.998168
#include <iostream>
#include <vector>

int compute_301() {
    int base = 459;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_301() << std::endl;
    return 0;
}
