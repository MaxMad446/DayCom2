// Auto-generated module | 2026-05-11T22:04:38.545183
#include <iostream>
#include <vector>

int compute_403() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_403() << std::endl;
    return 0;
}
