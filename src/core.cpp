// Auto-generated module | 2026-05-11T20:38:19.890864
#include <iostream>
#include <vector>

int compute_402() {
    int base = 451;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_402() << std::endl;
    return 0;
}
