// Auto-generated module | 2026-05-11T20:53:23.040327
#include <iostream>
#include <vector>

int compute_494() {
    int base = 270;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_494() << std::endl;
    return 0;
}
