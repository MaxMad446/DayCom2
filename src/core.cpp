// Auto-generated module | 2026-05-11T22:45:10.661596
#include <iostream>
#include <vector>

int compute_179() {
    int base = 325;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_179() << std::endl;
    return 0;
}
