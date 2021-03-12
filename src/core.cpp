// Auto-generated module | 2026-05-12T20:40:47.854027
#include <iostream>
#include <vector>

int compute_514() {
    int base = 119;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_514() << std::endl;
    return 0;
}
