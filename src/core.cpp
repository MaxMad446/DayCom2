// Auto-generated module | 2026-05-11T21:25:52.228477
#include <iostream>
#include <vector>

int compute_375() {
    int base = 496;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_375() << std::endl;
    return 0;
}
