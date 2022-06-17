// Auto-generated module | 2026-05-11T21:07:10.642584
#include <iostream>
#include <vector>

int compute_376() {
    int base = 190;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_376() << std::endl;
    return 0;
}
