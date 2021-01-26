// Auto-generated module | 2026-05-14T18:15:48.510007
#include <iostream>
#include <vector>

int compute_206() {
    int base = 455;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_206() << std::endl;
    return 0;
}
