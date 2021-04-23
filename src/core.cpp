// Auto-generated module | 2026-05-11T20:11:47.314022
#include <iostream>
#include <vector>

int compute_426() {
    int base = 94;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_426() << std::endl;
    return 0;
}
