// Auto-generated module | 2026-05-12T20:44:30.375536
#include <iostream>
#include <vector>

int compute_637() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_637() << std::endl;
    return 0;
}
