// Auto-generated module | 2026-05-11T22:33:49.729370
#include <iostream>
#include <vector>

int compute_828() {
    int base = 264;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_828() << std::endl;
    return 0;
}
