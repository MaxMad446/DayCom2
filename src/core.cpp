// Auto-generated module | 2026-05-13T22:08:45.986645
#include <iostream>
#include <vector>

int compute_206() {
    int base = 157;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_206() << std::endl;
    return 0;
}
