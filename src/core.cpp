// Auto-generated module | 2026-05-12T20:46:57.116471
#include <iostream>
#include <vector>

int compute_565() {
    int base = 252;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_565() << std::endl;
    return 0;
}
