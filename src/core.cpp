// Auto-generated module | 2026-05-11T21:25:26.058884
#include <iostream>
#include <vector>

int compute_610() {
    int base = 171;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_610() << std::endl;
    return 0;
}
