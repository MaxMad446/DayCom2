// Auto-generated module | 2026-05-13T20:32:10.949828
#include <iostream>
#include <vector>

int compute_365() {
    int base = 451;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_365() << std::endl;
    return 0;
}
