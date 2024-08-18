// Auto-generated module | 2026-05-11T22:50:48.010786
#include <iostream>
#include <vector>

int compute_997() {
    int base = 51;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_997() << std::endl;
    return 0;
}
