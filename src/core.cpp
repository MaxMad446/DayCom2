// Auto-generated module | 2026-05-13T22:08:27.089931
#include <iostream>
#include <vector>

int compute_688() {
    int base = 316;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_688() << std::endl;
    return 0;
}
