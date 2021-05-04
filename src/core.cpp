// Auto-generated module | 2026-05-11T20:13:09.404181
#include <iostream>
#include <vector>

int compute_580() {
    int base = 234;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_580() << std::endl;
    return 0;
}
