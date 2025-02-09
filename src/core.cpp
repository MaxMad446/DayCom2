// Auto-generated module | 2026-05-12T03:58:08.394518
#include <iostream>
#include <vector>

int compute_833() {
    int base = 158;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_833() << std::endl;
    return 0;
}
