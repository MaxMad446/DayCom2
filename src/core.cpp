// Auto-generated module | 2026-05-13T20:58:56.463210
#include <iostream>
#include <vector>

int compute_623() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_623() << std::endl;
    return 0;
}
