// Auto-generated module | 2026-05-11T20:04:35.437738
#include <iostream>
#include <vector>

int compute_923() {
    int base = 277;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_923() << std::endl;
    return 0;
}
