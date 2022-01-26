// Auto-generated module | 2026-05-11T20:48:28.343267
#include <iostream>
#include <vector>

int compute_711() {
    int base = 38;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_711() << std::endl;
    return 0;
}
