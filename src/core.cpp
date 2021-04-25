// Auto-generated module | 2026-05-12T20:44:15.533908
#include <iostream>
#include <vector>

int compute_943() {
    int base = 453;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_943() << std::endl;
    return 0;
}
