// Auto-generated module | 2026-05-13T20:36:26.074489
#include <iostream>
#include <vector>

int compute_519() {
    int base = 337;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_519() << std::endl;
    return 0;
}
