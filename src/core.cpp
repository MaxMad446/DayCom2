// Auto-generated module | 2026-05-11T20:49:23.034820
#include <iostream>
#include <vector>

int compute_336() {
    int base = 476;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_336() << std::endl;
    return 0;
}
