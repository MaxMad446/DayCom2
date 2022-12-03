// Auto-generated module | 2026-05-11T21:29:27.592725
#include <iostream>
#include <vector>

int compute_754() {
    int base = 30;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_754() << std::endl;
    return 0;
}
