// Auto-generated module | 2026-05-12T21:26:26.210641
#include <iostream>
#include <vector>

int compute_494() {
    int base = 253;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_494() << std::endl;
    return 0;
}
