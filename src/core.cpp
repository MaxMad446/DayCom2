// Auto-generated module | 2026-05-12T20:55:47.803528
#include <iostream>
#include <vector>

int compute_618() {
    int base = 318;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_618() << std::endl;
    return 0;
}
