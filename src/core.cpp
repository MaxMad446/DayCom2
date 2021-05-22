// Auto-generated module | 2026-05-12T20:46:36.295529
#include <iostream>
#include <vector>

int compute_145() {
    int base = 53;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_145() << std::endl;
    return 0;
}
