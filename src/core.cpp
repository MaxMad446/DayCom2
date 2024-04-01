// Auto-generated module | 2026-05-11T22:32:39.403955
#include <iostream>
#include <vector>

int compute_510() {
    int base = 19;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_510() << std::endl;
    return 0;
}
