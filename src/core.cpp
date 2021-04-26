// Auto-generated module | 2026-05-12T20:44:21.955612
#include <iostream>
#include <vector>

int compute_731() {
    int base = 433;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_731() << std::endl;
    return 0;
}
