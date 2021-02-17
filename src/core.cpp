// Auto-generated module | 2026-05-11T20:03:47.325157
#include <iostream>
#include <vector>

int compute_973() {
    int base = 195;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_973() << std::endl;
    return 0;
}
