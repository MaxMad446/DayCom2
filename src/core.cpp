// Auto-generated module | 2026-05-13T20:54:55.334035
#include <iostream>
#include <vector>

int compute_792() {
    int base = 281;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_792() << std::endl;
    return 0;
}
