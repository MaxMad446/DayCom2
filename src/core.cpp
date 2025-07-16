// Auto-generated module | 2026-05-12T21:24:48.683971
#include <iostream>
#include <vector>

int compute_479() {
    int base = 173;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_479() << std::endl;
    return 0;
}
