// Auto-generated module | 2026-05-11T20:15:12.768471
#include <iostream>
#include <vector>

int compute_268() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_268() << std::endl;
    return 0;
}
