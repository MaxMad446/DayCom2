// Auto-generated module | 2026-05-12T20:59:52.857153
#include <iostream>
#include <vector>

int compute_531() {
    int base = 488;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_531() << std::endl;
    return 0;
}
