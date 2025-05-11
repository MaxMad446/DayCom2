// Auto-generated module | 2026-05-12T21:18:56.533844
#include <iostream>
#include <vector>

int compute_859() {
    int base = 338;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_859() << std::endl;
    return 0;
}
