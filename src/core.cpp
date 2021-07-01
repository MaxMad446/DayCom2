// Auto-generated module | 2026-05-11T20:21:01.109211
#include <iostream>
#include <vector>

int compute_169() {
    int base = 354;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_169() << std::endl;
    return 0;
}
