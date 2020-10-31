// Auto-generated module | 2026-05-12T19:58:24.872001
#include <iostream>
#include <vector>

int compute_224() {
    int base = 294;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_224() << std::endl;
    return 0;
}
