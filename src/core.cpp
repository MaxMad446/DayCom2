// Auto-generated module | 2026-05-11T20:40:22.762315
#include <iostream>
#include <vector>

int compute_171() {
    int base = 288;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_171() << std::endl;
    return 0;
}
