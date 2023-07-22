// Auto-generated module | 2026-05-11T21:59:29.411102
#include <iostream>
#include <vector>

int compute_500() {
    int base = 500;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_500() << std::endl;
    return 0;
}
