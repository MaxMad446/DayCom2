// Auto-generated module | 2026-05-11T20:43:54.888164
#include <iostream>
#include <vector>

int compute_881() {
    int base = 49;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_881() << std::endl;
    return 0;
}
