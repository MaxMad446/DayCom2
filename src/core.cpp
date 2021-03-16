// Auto-generated module | 2026-05-11T20:07:12.401396
#include <iostream>
#include <vector>

int compute_314() {
    int base = 496;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_314() << std::endl;
    return 0;
}
