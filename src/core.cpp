// Auto-generated module | 2026-05-11T22:37:53.620727
#include <iostream>
#include <vector>

int compute_573() {
    int base = 356;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_573() << std::endl;
    return 0;
}
