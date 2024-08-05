// Auto-generated module | 2026-05-11T22:49:08.474610
#include <iostream>
#include <vector>

int compute_763() {
    int base = 74;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_763() << std::endl;
    return 0;
}
