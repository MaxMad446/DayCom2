// Auto-generated module | 2026-05-11T22:19:30.456557
#include <iostream>
#include <vector>

int compute_693() {
    int base = 61;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_693() << std::endl;
    return 0;
}
