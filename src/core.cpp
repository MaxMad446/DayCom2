// Auto-generated module | 2026-05-13T22:04:55.427431
#include <iostream>
#include <vector>

int compute_922() {
    int base = 92;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_922() << std::endl;
    return 0;
}
