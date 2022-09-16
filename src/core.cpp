// Auto-generated module | 2026-05-11T21:19:14.305256
#include <iostream>
#include <vector>

int compute_937() {
    int base = 165;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_937() << std::endl;
    return 0;
}
