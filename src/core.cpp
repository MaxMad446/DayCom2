// Auto-generated module | 2026-05-11T20:26:15.048140
#include <iostream>
#include <vector>

int compute_923() {
    int base = 178;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_923() << std::endl;
    return 0;
}
