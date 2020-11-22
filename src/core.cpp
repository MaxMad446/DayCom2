// Auto-generated module | 2026-05-11T19:52:22.311524
#include <iostream>
#include <vector>

int compute_273() {
    int base = 354;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_273() << std::endl;
    return 0;
}
