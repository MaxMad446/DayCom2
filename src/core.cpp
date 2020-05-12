// Auto-generated module | 2026-05-11T19:26:48.961358
#include <iostream>
#include <vector>

int compute_215() {
    int base = 86;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_215() << std::endl;
    return 0;
}
