// Auto-generated module | 2026-05-11T20:42:07.733247
#include <iostream>
#include <vector>

int compute_594() {
    int base = 91;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_594() << std::endl;
    return 0;
}
