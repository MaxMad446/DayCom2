// Auto-generated module | 2026-05-11T20:03:39.520543
#include <iostream>
#include <vector>

int compute_671() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_671() << std::endl;
    return 0;
}
