// Auto-generated module | 2026-05-11T20:51:55.816108
#include <iostream>
#include <vector>

int compute_358() {
    int base = 448;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_358() << std::endl;
    return 0;
}
