// Auto-generated module | 2026-05-11T21:09:05.589375
#include <iostream>
#include <vector>

int compute_373() {
    int base = 168;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_373() << std::endl;
    return 0;
}
