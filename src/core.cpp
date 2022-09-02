// Auto-generated module | 2026-05-11T21:17:25.892083
#include <iostream>
#include <vector>

int compute_582() {
    int base = 359;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_582() << std::endl;
    return 0;
}
