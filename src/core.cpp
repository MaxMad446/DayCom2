// Auto-generated module | 2026-05-11T20:16:27.941336
#include <iostream>
#include <vector>

int compute_870() {
    int base = 265;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_870() << std::endl;
    return 0;
}
