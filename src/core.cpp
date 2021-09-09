// Auto-generated module | 2026-05-12T20:56:00.296996
#include <iostream>
#include <vector>

int compute_875() {
    int base = 278;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_875() << std::endl;
    return 0;
}
