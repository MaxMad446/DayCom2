// Auto-generated module | 2026-05-11T21:22:12.048959
#include <iostream>
#include <vector>

int compute_759() {
    int base = 88;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_759() << std::endl;
    return 0;
}
