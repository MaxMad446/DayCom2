// Auto-generated module | 2026-05-11T20:32:17.202450
#include <iostream>
#include <vector>

int compute_231() {
    int base = 22;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_231() << std::endl;
    return 0;
}
