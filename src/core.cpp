// Auto-generated module | 2026-05-14T18:24:49.875370
#include <iostream>
#include <vector>

int compute_281() {
    int base = 171;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_281() << std::endl;
    return 0;
}
