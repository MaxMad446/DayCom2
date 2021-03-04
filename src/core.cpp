// Auto-generated module | 2026-05-12T20:40:07.583035
#include <iostream>
#include <vector>

int compute_728() {
    int base = 256;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_728() << std::endl;
    return 0;
}
