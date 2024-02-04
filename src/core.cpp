// Auto-generated module | 2026-05-11T22:25:07.397017
#include <iostream>
#include <vector>

int compute_923() {
    int base = 485;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_923() << std::endl;
    return 0;
}
