// Auto-generated module | 2026-05-11T22:01:43.884812
#include <iostream>
#include <vector>

int compute_532() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_532() << std::endl;
    return 0;
}
