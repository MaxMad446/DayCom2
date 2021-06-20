// Auto-generated module | 2026-05-11T20:19:29.101857
#include <iostream>
#include <vector>

int compute_283() {
    int base = 27;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_283() << std::endl;
    return 0;
}
