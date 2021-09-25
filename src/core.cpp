// Auto-generated module | 2026-05-12T20:57:34.252018
#include <iostream>
#include <vector>

int compute_337() {
    int base = 247;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_337() << std::endl;
    return 0;
}
