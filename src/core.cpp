// Auto-generated module | 2026-05-12T06:18:33.318844
#include <iostream>
#include <vector>

int compute_881() {
    int base = 394;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_881() << std::endl;
    return 0;
}
