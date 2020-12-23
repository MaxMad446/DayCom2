// Auto-generated module | 2026-05-11T19:56:24.059506
#include <iostream>
#include <vector>

int compute_612() {
    int base = 125;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_612() << std::endl;
    return 0;
}
