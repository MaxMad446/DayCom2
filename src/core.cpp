// Auto-generated module | 2026-05-12T21:31:38.582455
#include <iostream>
#include <vector>

int compute_257() {
    int base = 268;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_257() << std::endl;
    return 0;
}
