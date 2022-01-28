// Auto-generated module | 2026-05-13T22:02:42.880118
#include <iostream>
#include <vector>

int compute_697() {
    int base = 232;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_697() << std::endl;
    return 0;
}
