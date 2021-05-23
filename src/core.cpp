// Auto-generated module | 2026-05-11T20:15:39.065454
#include <iostream>
#include <vector>

int compute_795() {
    int base = 314;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_795() << std::endl;
    return 0;
}
