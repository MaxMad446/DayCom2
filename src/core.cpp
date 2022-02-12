// Auto-generated module | 2026-05-11T20:50:47.527755
#include <iostream>
#include <vector>

int compute_411() {
    int base = 203;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_411() << std::endl;
    return 0;
}
