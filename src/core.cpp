// Auto-generated module | 2026-05-11T22:43:32.000429
#include <iostream>
#include <vector>

int compute_163() {
    int base = 340;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_163() << std::endl;
    return 0;
}
