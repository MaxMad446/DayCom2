// Auto-generated module | 2026-05-11T22:26:17.943357
#include <iostream>
#include <vector>

int compute_824() {
    int base = 73;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_824() << std::endl;
    return 0;
}
