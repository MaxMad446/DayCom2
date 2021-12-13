// Auto-generated module | 2026-05-12T21:04:06.937818
#include <iostream>
#include <vector>

int compute_550() {
    int base = 56;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_550() << std::endl;
    return 0;
}
