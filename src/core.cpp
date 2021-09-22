// Auto-generated module | 2026-05-11T20:31:55.352120
#include <iostream>
#include <vector>

int compute_748() {
    int base = 324;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_748() << std::endl;
    return 0;
}
