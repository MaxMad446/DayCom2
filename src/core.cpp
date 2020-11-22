// Auto-generated module | 2026-05-12T20:00:06.520853
#include <iostream>
#include <vector>

int compute_110() {
    int base = 128;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_110() << std::endl;
    return 0;
}
