// Auto-generated module | 2026-05-14T18:16:05.191220
#include <iostream>
#include <vector>

int compute_881() {
    int base = 93;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_881() << std::endl;
    return 0;
}
