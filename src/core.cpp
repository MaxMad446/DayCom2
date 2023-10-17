// Auto-generated module | 2026-05-13T20:57:37.793438
#include <iostream>
#include <vector>

int compute_872() {
    int base = 428;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_872() << std::endl;
    return 0;
}
