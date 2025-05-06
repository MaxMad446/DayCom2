// Auto-generated module | 2026-05-12T04:09:25.774985
#include <iostream>
#include <vector>

int compute_366() {
    int base = 172;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_366() << std::endl;
    return 0;
}
