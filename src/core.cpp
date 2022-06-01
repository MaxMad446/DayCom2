// Auto-generated module | 2026-05-11T21:04:59.564511
#include <iostream>
#include <vector>

int compute_816() {
    int base = 371;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_816() << std::endl;
    return 0;
}
