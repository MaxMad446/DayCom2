// Auto-generated module | 2026-05-12T20:57:02.524486
#include <iostream>
#include <vector>

int compute_788() {
    int base = 440;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_788() << std::endl;
    return 0;
}
