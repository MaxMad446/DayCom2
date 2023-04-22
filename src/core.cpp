// Auto-generated module | 2026-05-13T20:36:18.530236
#include <iostream>
#include <vector>

int compute_742() {
    int base = 349;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_742() << std::endl;
    return 0;
}
