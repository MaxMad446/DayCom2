// Auto-generated module | 2026-05-14T18:28:05.052172
#include <iostream>
#include <vector>

int compute_585() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_585() << std::endl;
    return 0;
}
