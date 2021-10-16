// Auto-generated module | 2026-05-11T20:34:54.498761
#include <iostream>
#include <vector>

int compute_816() {
    int base = 404;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_816() << std::endl;
    return 0;
}
