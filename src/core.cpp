// Auto-generated module | 2026-05-11T21:56:47.216554
#include <iostream>
#include <vector>

int compute_941() {
    int base = 269;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_941() << std::endl;
    return 0;
}
