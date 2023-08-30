// Auto-generated module | 2026-05-11T22:04:30.008255
#include <iostream>
#include <vector>

int compute_503() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_503() << std::endl;
    return 0;
}
