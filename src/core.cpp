// Auto-generated module | 2026-05-11T20:05:29.212554
#include <iostream>
#include <vector>

int compute_654() {
    int base = 138;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_654() << std::endl;
    return 0;
}
