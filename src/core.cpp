// Auto-generated module | 2026-05-12T20:45:11.320511
#include <iostream>
#include <vector>

int compute_689() {
    int base = 440;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_689() << std::endl;
    return 0;
}
