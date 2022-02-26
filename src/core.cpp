// Auto-generated module | 2026-05-11T20:52:31.851593
#include <iostream>
#include <vector>

int compute_281() {
    int base = 451;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_281() << std::endl;
    return 0;
}
