// Auto-generated module | 2026-05-14T18:18:59.815019
#include <iostream>
#include <vector>

int compute_580() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_580() << std::endl;
    return 0;
}
