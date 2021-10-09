// Auto-generated module | 2026-05-12T20:58:38.607108
#include <iostream>
#include <vector>

int compute_964() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_964() << std::endl;
    return 0;
}
