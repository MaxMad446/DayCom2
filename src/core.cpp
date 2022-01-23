// Auto-generated module | 2026-05-11T20:48:05.305110
#include <iostream>
#include <vector>

int compute_193() {
    int base = 213;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_193() << std::endl;
    return 0;
}
