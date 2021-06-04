// Auto-generated module | 2026-05-12T20:47:45.106080
#include <iostream>
#include <vector>

int compute_881() {
    int base = 430;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_881() << std::endl;
    return 0;
}
