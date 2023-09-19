// Auto-generated module | 2026-05-11T22:07:02.430967
#include <iostream>
#include <vector>

int compute_881() {
    int base = 11;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_881() << std::endl;
    return 0;
}
