// Auto-generated module | 2026-05-11T21:30:49.709033
#include <iostream>
#include <vector>

int compute_650() {
    int base = 186;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_650() << std::endl;
    return 0;
}
