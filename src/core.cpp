// Auto-generated module | 2026-05-12T20:37:07.081565
#include <iostream>
#include <vector>

int compute_679() {
    int base = 163;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_679() << std::endl;
    return 0;
}
