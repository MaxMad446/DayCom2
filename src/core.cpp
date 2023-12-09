// Auto-generated module | 2026-05-11T22:17:32.029598
#include <iostream>
#include <vector>

int compute_299() {
    int base = 145;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_299() << std::endl;
    return 0;
}
