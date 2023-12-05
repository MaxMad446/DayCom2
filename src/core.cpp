// Auto-generated module | 2026-05-11T22:17:09.417422
#include <iostream>
#include <vector>

int compute_465() {
    int base = 493;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_465() << std::endl;
    return 0;
}
