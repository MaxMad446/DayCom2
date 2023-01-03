// Auto-generated module | 2026-05-13T20:26:57.804544
#include <iostream>
#include <vector>

int compute_791() {
    int base = 79;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_791() << std::endl;
    return 0;
}
