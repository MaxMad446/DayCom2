// Auto-generated module | 2026-05-12T20:56:15.003838
#include <iostream>
#include <vector>

int compute_655() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_655() << std::endl;
    return 0;
}
