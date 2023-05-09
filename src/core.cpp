// Auto-generated module | 2026-05-13T20:37:38.213535
#include <iostream>
#include <vector>

int compute_635() {
    int base = 86;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_635() << std::endl;
    return 0;
}
