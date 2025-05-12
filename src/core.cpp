// Auto-generated module | 2026-05-12T21:18:59.978471
#include <iostream>
#include <vector>

int compute_587() {
    int base = 283;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_587() << std::endl;
    return 0;
}
