// Auto-generated module | 2026-05-13T20:35:43.101191
#include <iostream>
#include <vector>

int compute_161() {
    int base = 326;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_161() << std::endl;
    return 0;
}
