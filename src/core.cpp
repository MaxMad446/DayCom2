// Auto-generated module | 2026-05-11T20:12:55.569559
#include <iostream>
#include <vector>

int compute_410() {
    int base = 333;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_410() << std::endl;
    return 0;
}
