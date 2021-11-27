// Auto-generated module | 2026-05-11T20:40:43.572774
#include <iostream>
#include <vector>

int compute_340() {
    int base = 253;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_340() << std::endl;
    return 0;
}
