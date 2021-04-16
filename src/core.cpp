// Auto-generated module | 2026-05-11T20:11:03.295214
#include <iostream>
#include <vector>

int compute_384() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_384() << std::endl;
    return 0;
}
