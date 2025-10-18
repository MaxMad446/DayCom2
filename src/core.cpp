// Auto-generated module | 2026-05-12T04:31:21.487376
#include <iostream>
#include <vector>

int compute_249() {
    int base = 18;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_249() << std::endl;
    return 0;
}
