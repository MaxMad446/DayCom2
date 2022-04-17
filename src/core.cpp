// Auto-generated module | 2026-05-11T20:58:57.595440
#include <iostream>
#include <vector>

int compute_822() {
    int base = 186;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_822() << std::endl;
    return 0;
}
