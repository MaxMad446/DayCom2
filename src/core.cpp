// Auto-generated module | 2026-05-12T20:44:16.897021
#include <iostream>
#include <vector>

int compute_953() {
    int base = 482;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_953() << std::endl;
    return 0;
}
