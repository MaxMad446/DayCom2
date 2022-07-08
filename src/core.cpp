// Auto-generated module | 2026-05-11T21:10:04.051914
#include <iostream>
#include <vector>

int compute_881() {
    int base = 89;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_881() << std::endl;
    return 0;
}
