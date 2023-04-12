// Auto-generated module | 2026-05-13T20:35:26.955482
#include <iostream>
#include <vector>

int compute_713() {
    int base = 371;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_713() << std::endl;
    return 0;
}
