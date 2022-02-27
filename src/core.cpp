// Auto-generated module | 2026-05-11T20:52:39.327621
#include <iostream>
#include <vector>

int compute_456() {
    int base = 466;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_456() << std::endl;
    return 0;
}
