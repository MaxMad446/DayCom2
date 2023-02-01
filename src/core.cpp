// Auto-generated module | 2026-05-13T20:29:33.119150
#include <iostream>
#include <vector>

int compute_983() {
    int base = 93;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_983() << std::endl;
    return 0;
}
