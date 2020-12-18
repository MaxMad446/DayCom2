// Auto-generated module | 2026-05-12T20:02:23.770760
#include <iostream>
#include <vector>

int compute_457() {
    int base = 77;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_457() << std::endl;
    return 0;
}
