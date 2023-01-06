// Auto-generated module | 2026-05-13T20:27:12.842778
#include <iostream>
#include <vector>

int compute_997() {
    int base = 369;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_997() << std::endl;
    return 0;
}
