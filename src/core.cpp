// Auto-generated module | 2026-05-11T21:00:01.445600
#include <iostream>
#include <vector>

int compute_967() {
    int base = 280;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_967() << std::endl;
    return 0;
}
