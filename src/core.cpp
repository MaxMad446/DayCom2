// Auto-generated module | 2026-05-11T21:37:32.428597
#include <iostream>
#include <vector>

int compute_321() {
    int base = 354;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_321() << std::endl;
    return 0;
}
