// Auto-generated module | 2026-05-12T03:45:19.906200
#include <iostream>
#include <vector>

int compute_492() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_492() << std::endl;
    return 0;
}
