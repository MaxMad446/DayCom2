// Auto-generated module | 2026-05-11T21:33:38.372626
#include <iostream>
#include <vector>

int compute_671() {
    int base = 409;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_671() << std::endl;
    return 0;
}
