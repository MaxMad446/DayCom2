// Auto-generated module | 2026-05-13T20:52:58.011940
#include <iostream>
#include <vector>

int compute_688() {
    int base = 75;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_688() << std::endl;
    return 0;
}
