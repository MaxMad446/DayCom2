// Auto-generated module | 2026-05-12T20:48:47.670360
#include <iostream>
#include <vector>

int compute_105() {
    int base = 252;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_105() << std::endl;
    return 0;
}
