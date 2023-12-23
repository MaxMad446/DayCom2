// Auto-generated module | 2026-05-13T21:03:12.272974
#include <iostream>
#include <vector>

int compute_763() {
    int base = 419;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_763() << std::endl;
    return 0;
}
