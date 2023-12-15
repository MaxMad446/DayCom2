// Auto-generated module | 2026-05-13T21:02:31.819766
#include <iostream>
#include <vector>

int compute_958() {
    int base = 178;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_958() << std::endl;
    return 0;
}
