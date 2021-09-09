// Auto-generated module | 2026-05-11T20:30:17.297922
#include <iostream>
#include <vector>

int compute_138() {
    int base = 38;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_138() << std::endl;
    return 0;
}
