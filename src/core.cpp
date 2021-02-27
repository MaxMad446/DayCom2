// Auto-generated module | 2026-05-12T20:39:42.848866
#include <iostream>
#include <vector>

int compute_129() {
    int base = 272;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_129() << std::endl;
    return 0;
}
