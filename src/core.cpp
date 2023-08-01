// Auto-generated module | 2026-05-13T20:51:16.083556
#include <iostream>
#include <vector>

int compute_457() {
    int base = 432;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_457() << std::endl;
    return 0;
}
