// Auto-generated module | 2026-05-12T20:37:47.994545
#include <iostream>
#include <vector>

int compute_224() {
    int base = 292;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_224() << std::endl;
    return 0;
}
