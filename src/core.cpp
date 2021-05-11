// Auto-generated module | 2026-05-11T20:14:04.737712
#include <iostream>
#include <vector>

int compute_577() {
    int base = 76;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_577() << std::endl;
    return 0;
}
