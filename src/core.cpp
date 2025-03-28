// Auto-generated module | 2026-05-12T04:04:11.219153
#include <iostream>
#include <vector>

int compute_312() {
    int base = 396;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_312() << std::endl;
    return 0;
}
