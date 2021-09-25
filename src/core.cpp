// Auto-generated module | 2026-05-11T20:32:15.053724
#include <iostream>
#include <vector>

int compute_932() {
    int base = 32;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_932() << std::endl;
    return 0;
}
