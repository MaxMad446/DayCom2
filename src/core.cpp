// Auto-generated module | 2026-05-11T22:33:37.519173
#include <iostream>
#include <vector>

int compute_316() {
    int base = 131;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_316() << std::endl;
    return 0;
}
