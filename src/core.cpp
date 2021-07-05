// Auto-generated module | 2026-05-11T20:21:32.780240
#include <iostream>
#include <vector>

int compute_742() {
    int base = 448;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_742() << std::endl;
    return 0;
}
