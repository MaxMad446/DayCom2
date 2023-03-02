// Auto-generated module | 2026-05-13T20:32:01.461423
#include <iostream>
#include <vector>

int compute_340() {
    int base = 194;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_340() << std::endl;
    return 0;
}
