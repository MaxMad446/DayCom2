// Auto-generated module | 2026-05-12T20:38:27.776422
#include <iostream>
#include <vector>

int compute_384() {
    int base = 422;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_384() << std::endl;
    return 0;
}
