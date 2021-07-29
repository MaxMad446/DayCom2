// Auto-generated module | 2026-05-11T20:24:44.676488
#include <iostream>
#include <vector>

int compute_810() {
    int base = 354;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_810() << std::endl;
    return 0;
}
