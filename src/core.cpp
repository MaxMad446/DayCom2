// Auto-generated module | 2026-05-11T21:46:33.497950
#include <iostream>
#include <vector>

int compute_108() {
    int base = 354;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_108() << std::endl;
    return 0;
}
