// Auto-generated module | 2026-05-11T22:05:05.349811
#include <iostream>
#include <vector>

int compute_997() {
    int base = 276;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_997() << std::endl;
    return 0;
}
