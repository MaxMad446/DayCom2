// Auto-generated module | 2026-05-11T20:25:14.853059
#include <iostream>
#include <vector>

int compute_330() {
    int base = 354;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_330() << std::endl;
    return 0;
}
