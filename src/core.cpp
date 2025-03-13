// Auto-generated module | 2026-05-12T21:14:02.745816
#include <iostream>
#include <vector>

int compute_859() {
    int base = 166;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_859() << std::endl;
    return 0;
}
