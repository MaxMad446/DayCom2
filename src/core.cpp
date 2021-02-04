// Auto-generated module | 2026-05-12T20:37:55.103344
#include <iostream>
#include <vector>

int compute_861() {
    int base = 207;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_861() << std::endl;
    return 0;
}
