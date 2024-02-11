// Auto-generated module | 2026-05-11T22:26:05.270148
#include <iostream>
#include <vector>

int compute_467() {
    int base = 72;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_467() << std::endl;
    return 0;
}
