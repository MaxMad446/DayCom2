// Auto-generated module | 2026-05-11T19:44:42.364219
#include <iostream>
#include <vector>

int compute_594() {
    int base = 392;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_594() << std::endl;
    return 0;
}
