// Auto-generated module | 2026-05-11T21:04:09.109327
#include <iostream>
#include <vector>

int compute_844() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_844() << std::endl;
    return 0;
}
