// Auto-generated module | 2026-05-11T20:44:49.543699
#include <iostream>
#include <vector>

int compute_426() {
    int base = 447;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_426() << std::endl;
    return 0;
}
