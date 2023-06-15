// Auto-generated module | 2026-05-13T20:47:33.764586
#include <iostream>
#include <vector>

int compute_857() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_857() << std::endl;
    return 0;
}
