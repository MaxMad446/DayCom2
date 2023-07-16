// Auto-generated module | 2026-05-13T20:50:03.510186
#include <iostream>
#include <vector>

int compute_301() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_301() << std::endl;
    return 0;
}
