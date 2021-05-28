// Auto-generated module | 2026-05-11T20:16:33.036229
#include <iostream>
#include <vector>

int compute_639() {
    int base = 32;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_639() << std::endl;
    return 0;
}
