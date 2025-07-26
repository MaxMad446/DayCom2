// Auto-generated module | 2026-05-12T04:19:57.125583
#include <iostream>
#include <vector>

int compute_857() {
    int base = 246;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_857() << std::endl;
    return 0;
}
