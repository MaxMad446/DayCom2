// Auto-generated module | 2026-05-11T22:05:00.663975
#include <iostream>
#include <vector>

int compute_742() {
    int base = 369;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_742() << std::endl;
    return 0;
}
