// Auto-generated module | 2026-05-12T20:59:08.396919
#include <iostream>
#include <vector>

int compute_124() {
    int base = 264;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_124() << std::endl;
    return 0;
}
