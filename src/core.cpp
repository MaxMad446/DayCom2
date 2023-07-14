// Auto-generated module | 2026-05-11T21:58:26.985727
#include <iostream>
#include <vector>

int compute_426() {
    int base = 98;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_426() << std::endl;
    return 0;
}
