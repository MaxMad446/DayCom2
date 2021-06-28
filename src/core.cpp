// Auto-generated module | 2026-05-11T20:20:38.970771
#include <iostream>
#include <vector>

int compute_660() {
    int base = 250;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_660() << std::endl;
    return 0;
}
