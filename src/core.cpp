// Auto-generated module | 2026-05-12T20:59:17.327704
#include <iostream>
#include <vector>

int compute_221() {
    int base = 477;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_221() << std::endl;
    return 0;
}
