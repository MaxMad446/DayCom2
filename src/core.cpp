// Auto-generated module | 2026-05-12T20:43:29.267164
#include <iostream>
#include <vector>

int compute_888() {
    int base = 375;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_888() << std::endl;
    return 0;
}
