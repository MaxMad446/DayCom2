// Auto-generated module | 2026-05-11T22:52:30.545647
#include <iostream>
#include <vector>

int compute_610() {
    int base = 431;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_610() << std::endl;
    return 0;
}
