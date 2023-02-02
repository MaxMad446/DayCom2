// Auto-generated module | 2026-05-11T21:37:18.704230
#include <iostream>
#include <vector>

int compute_849() {
    int base = 168;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_849() << std::endl;
    return 0;
}
