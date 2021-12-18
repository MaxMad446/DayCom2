// Auto-generated module | 2026-05-12T21:04:32.704978
#include <iostream>
#include <vector>

int compute_806() {
    int base = 270;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_806() << std::endl;
    return 0;
}
