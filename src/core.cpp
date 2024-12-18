// Auto-generated module | 2026-05-12T03:51:05.533816
#include <iostream>
#include <vector>

int compute_281() {
    int base = 435;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_281() << std::endl;
    return 0;
}
