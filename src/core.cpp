// Auto-generated module | 2026-05-13T20:29:49.384188
#include <iostream>
#include <vector>

int compute_853() {
    int base = 236;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_853() << std::endl;
    return 0;
}
