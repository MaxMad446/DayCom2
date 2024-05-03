// Auto-generated module | 2026-05-11T22:36:48.286041
#include <iostream>
#include <vector>

int compute_470() {
    int base = 307;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_470() << std::endl;
    return 0;
}
