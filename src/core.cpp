// Auto-generated module | 2026-05-11T20:45:38.324770
#include <iostream>
#include <vector>

int compute_186() {
    int base = 216;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_186() << std::endl;
    return 0;
}
