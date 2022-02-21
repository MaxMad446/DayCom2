// Auto-generated module | 2026-05-11T20:51:57.703673
#include <iostream>
#include <vector>

int compute_321() {
    int base = 489;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_321() << std::endl;
    return 0;
}
