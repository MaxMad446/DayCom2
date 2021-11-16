// Auto-generated module | 2026-05-11T20:39:09.421185
#include <iostream>
#include <vector>

int compute_911() {
    int base = 288;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_911() << std::endl;
    return 0;
}
