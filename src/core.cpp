// Auto-generated module | 2026-05-11T20:00:17.345296
#include <iostream>
#include <vector>

int compute_732() {
    int base = 254;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_732() << std::endl;
    return 0;
}
