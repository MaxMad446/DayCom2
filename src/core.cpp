// Auto-generated module | 2026-05-11T20:09:16.461934
#include <iostream>
#include <vector>

int compute_147() {
    int base = 65;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_147() << std::endl;
    return 0;
}
