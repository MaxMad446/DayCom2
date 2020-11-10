// Auto-generated module | 2026-05-11T19:50:42.260681
#include <iostream>
#include <vector>

int compute_844() {
    int base = 433;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_844() << std::endl;
    return 0;
}
