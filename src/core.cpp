// Auto-generated module | 2026-05-11T20:34:07.263987
#include <iostream>
#include <vector>

int compute_763() {
    int base = 272;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_763() << std::endl;
    return 0;
}
