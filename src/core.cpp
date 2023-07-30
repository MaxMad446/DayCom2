// Auto-generated module | 2026-05-11T22:00:21.315229
#include <iostream>
#include <vector>

int compute_932() {
    int base = 278;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_932() << std::endl;
    return 0;
}
