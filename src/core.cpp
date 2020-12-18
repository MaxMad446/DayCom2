// Auto-generated module | 2026-05-11T19:55:45.270850
#include <iostream>
#include <vector>

int compute_340() {
    int base = 115;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_340() << std::endl;
    return 0;
}
