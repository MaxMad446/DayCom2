// Auto-generated module | 2026-05-13T20:38:54.328244
#include <iostream>
#include <vector>

int compute_540() {
    int base = 335;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_540() << std::endl;
    return 0;
}
