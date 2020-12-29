// Auto-generated module | 2026-05-12T20:03:22.558185
#include <iostream>
#include <vector>

int compute_552() {
    int base = 308;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_552() << std::endl;
    return 0;
}
