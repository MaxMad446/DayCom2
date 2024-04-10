// Auto-generated module | 2026-05-11T22:33:57.922932
#include <iostream>
#include <vector>

int compute_881() {
    int base = 192;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_881() << std::endl;
    return 0;
}
