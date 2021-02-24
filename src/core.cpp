// Auto-generated module | 2026-05-12T20:39:29.809883
#include <iostream>
#include <vector>

int compute_832() {
    int base = 297;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_832() << std::endl;
    return 0;
}
