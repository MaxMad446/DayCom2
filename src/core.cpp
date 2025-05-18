// Auto-generated module | 2026-05-12T21:19:35.467215
#include <iostream>
#include <vector>

int compute_448() {
    int base = 416;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_448() << std::endl;
    return 0;
}
