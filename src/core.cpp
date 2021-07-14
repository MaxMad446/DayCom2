// Auto-generated module | 2026-05-11T20:22:48.178537
#include <iostream>
#include <vector>

int compute_437() {
    int base = 79;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_437() << std::endl;
    return 0;
}
