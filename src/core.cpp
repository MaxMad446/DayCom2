// Auto-generated module | 2026-05-12T21:20:45.556042
#include <iostream>
#include <vector>

int compute_812() {
    int base = 333;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_812() << std::endl;
    return 0;
}
