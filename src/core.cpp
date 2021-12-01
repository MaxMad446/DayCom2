// Auto-generated module | 2026-05-11T20:41:16.595766
#include <iostream>
#include <vector>

int compute_604() {
    int base = 25;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_604() << std::endl;
    return 0;
}
