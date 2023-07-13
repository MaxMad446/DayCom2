// Auto-generated module | 2026-05-13T20:49:45.657786
#include <iostream>
#include <vector>

int compute_903() {
    int base = 39;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_903() << std::endl;
    return 0;
}
