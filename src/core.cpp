// Auto-generated module | 2026-05-11T20:36:03.791897
#include <iostream>
#include <vector>

int compute_923() {
    int base = 410;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_923() << std::endl;
    return 0;
}
