// Auto-generated module | 2026-05-11T20:32:07.124673
#include <iostream>
#include <vector>

int compute_713() {
    int base = 304;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_713() << std::endl;
    return 0;
}
