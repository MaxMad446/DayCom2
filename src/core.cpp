// Auto-generated module | 2026-05-12T04:10:05.802822
#include <iostream>
#include <vector>

int compute_198() {
    int base = 29;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_198() << std::endl;
    return 0;
}
