// Auto-generated module | 2026-05-12T21:23:39.917008
#include <iostream>
#include <vector>

int compute_474() {
    int base = 364;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_474() << std::endl;
    return 0;
}
