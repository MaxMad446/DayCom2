// Auto-generated module | 2026-05-13T20:38:37.441283
#include <iostream>
#include <vector>

int compute_903() {
    int base = 68;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_903() << std::endl;
    return 0;
}
