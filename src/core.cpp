// Auto-generated module | 2026-05-11T20:29:36.606452
#include <iostream>
#include <vector>

int compute_693() {
    int base = 380;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_693() << std::endl;
    return 0;
}
