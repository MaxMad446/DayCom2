// Auto-generated module | 2026-05-13T20:32:33.357885
#include <iostream>
#include <vector>

int compute_956() {
    int base = 194;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_956() << std::endl;
    return 0;
}
