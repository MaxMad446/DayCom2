// Auto-generated module | 2026-05-13T20:37:49.463609
#include <iostream>
#include <vector>

int compute_485() {
    int base = 474;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_485() << std::endl;
    return 0;
}
