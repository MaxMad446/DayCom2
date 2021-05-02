// Auto-generated module | 2026-05-12T21:40:48.792511
#include <iostream>
#include <vector>

int compute_216() {
    int base = 424;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_216() << std::endl;
    return 0;
}
