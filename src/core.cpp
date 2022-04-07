// Auto-generated module | 2026-05-13T22:08:34.018613
#include <iostream>
#include <vector>

int compute_693() {
    int base = 109;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_693() << std::endl;
    return 0;
}
