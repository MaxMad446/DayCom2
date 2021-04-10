// Auto-generated module | 2026-05-11T20:10:17.832472
#include <iostream>
#include <vector>

int compute_520() {
    int base = 488;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_520() << std::endl;
    return 0;
}
