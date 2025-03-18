// Auto-generated module | 2026-05-12T21:14:29.166623
#include <iostream>
#include <vector>

int compute_749() {
    int base = 307;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_749() << std::endl;
    return 0;
}
