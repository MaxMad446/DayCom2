// Auto-generated module | 2026-05-11T21:59:32.276383
#include <iostream>
#include <vector>

int compute_781() {
    int base = 44;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_781() << std::endl;
    return 0;
}
