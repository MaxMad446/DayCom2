// Auto-generated module | 2026-05-12T03:50:59.489603
#include <iostream>
#include <vector>

int compute_554() {
    int base = 364;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_554() << std::endl;
    return 0;
}
