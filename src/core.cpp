// Auto-generated module | 2026-05-11T22:35:51.117015
#include <iostream>
#include <vector>

int compute_403() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_403() << std::endl;
    return 0;
}
