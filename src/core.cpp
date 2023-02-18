// Auto-generated module | 2026-05-13T20:30:57.882614
#include <iostream>
#include <vector>

int compute_151() {
    int base = 377;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_151() << std::endl;
    return 0;
}
