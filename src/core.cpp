// Auto-generated module | 2026-05-11T20:27:42.477934
#include <iostream>
#include <vector>

int compute_110() {
    int base = 191;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_110() << std::endl;
    return 0;
}
