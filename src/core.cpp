// Auto-generated module | 2026-05-11T20:53:09.059939
#include <iostream>
#include <vector>

int compute_569() {
    int base = 392;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_569() << std::endl;
    return 0;
}
