// Auto-generated module | 2026-05-11T21:59:58.520004
#include <iostream>
#include <vector>

int compute_857() {
    int base = 85;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_857() << std::endl;
    return 0;
}
