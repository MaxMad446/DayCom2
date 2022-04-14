// Auto-generated module | 2026-05-11T20:58:31.675011
#include <iostream>
#include <vector>

int compute_326() {
    int base = 364;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_326() << std::endl;
    return 0;
}
