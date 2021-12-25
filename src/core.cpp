// Auto-generated module | 2026-05-11T20:44:21.639714
#include <iostream>
#include <vector>

int compute_578() {
    int base = 410;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_578() << std::endl;
    return 0;
}
