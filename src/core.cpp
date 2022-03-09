// Auto-generated module | 2026-05-11T20:53:55.384975
#include <iostream>
#include <vector>

int compute_932() {
    int base = 327;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_932() << std::endl;
    return 0;
}
