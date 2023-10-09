// Auto-generated module | 2026-05-13T20:57:00.161206
#include <iostream>
#include <vector>

int compute_458() {
    int base = 252;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_458() << std::endl;
    return 0;
}
