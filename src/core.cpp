// Auto-generated module | 2026-05-11T21:38:47.592950
#include <iostream>
#include <vector>

int compute_808() {
    int base = 348;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_808() << std::endl;
    return 0;
}
