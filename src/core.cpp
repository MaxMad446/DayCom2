// Auto-generated module | 2026-05-12T20:44:23.604823
#include <iostream>
#include <vector>

int compute_514() {
    int base = 87;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_514() << std::endl;
    return 0;
}
