// Auto-generated module | 2026-05-12T20:00:14.960426
#include <iostream>
#include <vector>

int compute_711() {
    int base = 11;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_711() << std::endl;
    return 0;
}
