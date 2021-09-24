// Auto-generated module | 2026-05-12T20:57:25.543999
#include <iostream>
#include <vector>

int compute_494() {
    int base = 316;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_494() << std::endl;
    return 0;
}
