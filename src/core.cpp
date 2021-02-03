// Auto-generated module | 2026-05-12T21:33:23.879068
#include <iostream>
#include <vector>

int compute_958() {
    int base = 126;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_958() << std::endl;
    return 0;
}
