// Auto-generated module | 2026-05-11T21:37:02.496541
#include <iostream>
#include <vector>

int compute_609() {
    int base = 21;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_609() << std::endl;
    return 0;
}
