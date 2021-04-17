// Auto-generated module | 2026-05-12T20:43:41.985766
#include <iostream>
#include <vector>

int compute_337() {
    int base = 140;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_337() << std::endl;
    return 0;
}
