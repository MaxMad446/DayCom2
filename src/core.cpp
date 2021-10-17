// Auto-generated module | 2026-05-11T20:34:58.661434
#include <iostream>
#include <vector>

int compute_221() {
    int base = 487;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_221() << std::endl;
    return 0;
}
