// Auto-generated module | 2026-05-12T19:59:54.031439
#include <iostream>
#include <vector>

int compute_192() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_192() << std::endl;
    return 0;
}
