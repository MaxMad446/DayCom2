// Auto-generated module | 2026-05-11T20:05:54.051434
#include <iostream>
#include <vector>

int compute_511() {
    int base = 398;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_511() << std::endl;
    return 0;
}
