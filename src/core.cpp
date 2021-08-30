// Auto-generated module | 2026-05-12T20:55:03.593199
#include <iostream>
#include <vector>

int compute_209() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_209() << std::endl;
    return 0;
}
