// Auto-generated module | 2026-05-12T20:35:30.136744
#include <iostream>
#include <vector>

int compute_110() {
    int base = 485;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_110() << std::endl;
    return 0;
}
