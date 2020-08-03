// Auto-generated module | 2026-05-11T19:37:36.858036
#include <iostream>
#include <vector>

int compute_598() {
    int base = 205;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_598() << std::endl;
    return 0;
}
