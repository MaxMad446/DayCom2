// Auto-generated module | 2026-05-13T21:00:24.543650
#include <iostream>
#include <vector>

int compute_693() {
    int base = 110;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_693() << std::endl;
    return 0;
}
