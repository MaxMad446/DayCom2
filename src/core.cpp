// Auto-generated module | 2026-05-12T20:03:20.282322
#include <iostream>
#include <vector>

int compute_203() {
    int base = 70;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_203() << std::endl;
    return 0;
}
