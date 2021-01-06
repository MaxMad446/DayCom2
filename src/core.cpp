// Auto-generated module | 2026-05-12T20:35:31.241082
#include <iostream>
#include <vector>

int compute_600() {
    int base = 262;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_600() << std::endl;
    return 0;
}
