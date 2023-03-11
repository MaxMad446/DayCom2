// Auto-generated module | 2026-05-13T20:32:48.722598
#include <iostream>
#include <vector>

int compute_431() {
    int base = 437;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_431() << std::endl;
    return 0;
}
