// Auto-generated module | 2026-05-11T22:34:47.303310
#include <iostream>
#include <vector>

int compute_376() {
    int base = 333;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_376() << std::endl;
    return 0;
}
