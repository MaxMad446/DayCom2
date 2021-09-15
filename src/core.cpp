// Auto-generated module | 2026-05-11T20:30:56.841539
#include <iostream>
#include <vector>

int compute_640() {
    int base = 48;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_640() << std::endl;
    return 0;
}
