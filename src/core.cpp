// Auto-generated module | 2026-05-12T20:41:47.853549
#include <iostream>
#include <vector>

int compute_185() {
    int base = 74;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_185() << std::endl;
    return 0;
}
