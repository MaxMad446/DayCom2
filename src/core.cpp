// Auto-generated module | 2026-05-12T04:05:45.189438
#include <iostream>
#include <vector>

int compute_881() {
    int base = 371;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_881() << std::endl;
    return 0;
}
