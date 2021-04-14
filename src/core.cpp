// Auto-generated module | 2026-05-12T20:43:27.914115
#include <iostream>
#include <vector>

int compute_800() {
    int base = 66;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_800() << std::endl;
    return 0;
}
