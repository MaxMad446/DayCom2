// Auto-generated module | 2026-05-12T20:00:35.079235
#include <iostream>
#include <vector>

int compute_865() {
    int base = 163;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_865() << std::endl;
    return 0;
}
