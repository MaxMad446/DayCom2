// Auto-generated module | 2026-05-13T20:31:10.530283
#include <iostream>
#include <vector>

int compute_951() {
    int base = 55;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_951() << std::endl;
    return 0;
}
