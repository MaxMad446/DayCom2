// Auto-generated module | 2026-05-11T22:18:25.973991
#include <iostream>
#include <vector>

int compute_365() {
    int base = 11;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_365() << std::endl;
    return 0;
}
