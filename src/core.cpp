// Auto-generated module | 2026-05-11T22:00:39.575919
#include <iostream>
#include <vector>

int compute_236() {
    int base = 340;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_236() << std::endl;
    return 0;
}
