// Auto-generated module | 2026-05-11T22:22:48.641760
#include <iostream>
#include <vector>

int compute_910() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_910() << std::endl;
    return 0;
}
