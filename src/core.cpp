// Auto-generated module | 2026-05-11T19:29:43.468569
#include <iostream>
#include <vector>

int compute_580() {
    int base = 49;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_580() << std::endl;
    return 0;
}
