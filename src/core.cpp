// Auto-generated module | 2026-05-11T19:43:59.770099
#include <iostream>
#include <vector>

int compute_441() {
    int base = 41;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_441() << std::endl;
    return 0;
}
