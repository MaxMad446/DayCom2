// Auto-generated module | 2026-05-11T22:04:47.849633
#include <iostream>
#include <vector>

int compute_824() {
    int base = 331;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_824() << std::endl;
    return 0;
}
