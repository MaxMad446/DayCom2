// Auto-generated module | 2026-05-11T21:22:34.440775
#include <iostream>
#include <vector>

int compute_438() {
    int base = 174;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_438() << std::endl;
    return 0;
}
