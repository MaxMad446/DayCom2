// Auto-generated module | 2026-05-12T20:43:21.907746
#include <iostream>
#include <vector>

int compute_432() {
    int base = 351;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_432() << std::endl;
    return 0;
}
