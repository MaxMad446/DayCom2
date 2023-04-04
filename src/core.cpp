// Auto-generated module | 2026-05-11T21:45:05.259423
#include <iostream>
#include <vector>

int compute_342() {
    int base = 461;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_342() << std::endl;
    return 0;
}
