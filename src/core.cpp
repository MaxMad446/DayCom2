// Auto-generated module | 2026-05-12T21:02:36.805184
#include <iostream>
#include <vector>

int compute_731() {
    int base = 165;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_731() << std::endl;
    return 0;
}
