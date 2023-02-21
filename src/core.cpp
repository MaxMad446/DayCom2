// Auto-generated module | 2026-05-13T20:31:14.007766
#include <iostream>
#include <vector>

int compute_861() {
    int base = 26;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_861() << std::endl;
    return 0;
}
