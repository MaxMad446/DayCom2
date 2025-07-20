// Auto-generated module | 2026-05-12T21:25:06.489311
#include <iostream>
#include <vector>

int compute_606() {
    int base = 240;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_606() << std::endl;
    return 0;
}
