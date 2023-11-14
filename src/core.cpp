// Auto-generated module | 2026-05-11T22:14:27.171117
#include <iostream>
#include <vector>

int compute_660() {
    int base = 335;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_660() << std::endl;
    return 0;
}
