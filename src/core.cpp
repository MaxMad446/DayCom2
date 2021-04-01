// Auto-generated module | 2026-05-12T20:42:21.897541
#include <iostream>
#include <vector>

int compute_928() {
    int base = 169;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_928() << std::endl;
    return 0;
}
