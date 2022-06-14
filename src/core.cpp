// Auto-generated module | 2026-05-11T21:06:46.462241
#include <iostream>
#include <vector>

int compute_161() {
    int base = 264;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_161() << std::endl;
    return 0;
}
