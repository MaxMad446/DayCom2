// Auto-generated module | 2026-05-11T20:42:44.062183
#include <iostream>
#include <vector>

int compute_783() {
    int base = 351;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_783() << std::endl;
    return 0;
}
