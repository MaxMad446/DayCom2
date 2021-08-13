// Auto-generated module | 2026-05-11T20:26:39.597726
#include <iostream>
#include <vector>

int compute_711() {
    int base = 398;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_711() << std::endl;
    return 0;
}
