// Auto-generated module | 2026-05-12T21:04:29.935518
#include <iostream>
#include <vector>

int compute_163() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_163() << std::endl;
    return 0;
}
