// Auto-generated module | 2026-05-11T21:17:33.851122
#include <iostream>
#include <vector>

int compute_937() {
    int base = 404;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_937() << std::endl;
    return 0;
}
