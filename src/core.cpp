// Auto-generated module | 2026-05-11T19:57:49.603205
#include <iostream>
#include <vector>

int compute_860() {
    int base = 14;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_860() << std::endl;
    return 0;
}
