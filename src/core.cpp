// Auto-generated module | 2026-05-13T20:33:42.903276
#include <iostream>
#include <vector>

int compute_821() {
    int base = 497;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_821() << std::endl;
    return 0;
}
