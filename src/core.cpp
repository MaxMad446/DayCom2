// Auto-generated module | 2026-05-12T20:44:14.495837
#include <iostream>
#include <vector>

int compute_666() {
    int base = 300;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_666() << std::endl;
    return 0;
}
