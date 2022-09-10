// Auto-generated module | 2026-05-14T06:19:25.064025
#include <iostream>
#include <vector>

int compute_626() {
    int base = 88;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_626() << std::endl;
    return 0;
}
