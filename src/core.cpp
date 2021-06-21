// Auto-generated module | 2026-05-12T20:49:07.984674
#include <iostream>
#include <vector>

int compute_273() {
    int base = 32;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_273() << std::endl;
    return 0;
}
