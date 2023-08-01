// Auto-generated module | 2026-05-11T22:00:37.999636
#include <iostream>
#include <vector>

int compute_411() {
    int base = 12;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_411() << std::endl;
    return 0;
}
