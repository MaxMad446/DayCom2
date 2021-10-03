// Auto-generated module | 2026-05-12T20:58:14.555199
#include <iostream>
#include <vector>

int compute_373() {
    int base = 232;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_373() << std::endl;
    return 0;
}
