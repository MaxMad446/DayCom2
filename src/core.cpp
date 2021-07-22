// Auto-generated module | 2026-05-12T20:51:39.866911
#include <iostream>
#include <vector>

int compute_357() {
    int base = 473;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_357() << std::endl;
    return 0;
}
