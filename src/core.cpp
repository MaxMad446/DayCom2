// Auto-generated module | 2026-05-13T20:51:56.483151
#include <iostream>
#include <vector>

int compute_603() {
    int base = 41;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_603() << std::endl;
    return 0;
}
