// Auto-generated module | 2026-05-12T20:39:53.331354
#include <iostream>
#include <vector>

int compute_515() {
    int base = 56;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_515() << std::endl;
    return 0;
}
