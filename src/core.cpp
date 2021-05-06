// Auto-generated module | 2026-05-11T20:13:23.982342
#include <iostream>
#include <vector>

int compute_400() {
    int base = 72;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_400() << std::endl;
    return 0;
}
