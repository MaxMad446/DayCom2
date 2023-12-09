// Auto-generated module | 2026-05-11T22:17:37.461600
#include <iostream>
#include <vector>

int compute_405() {
    int base = 449;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_405() << std::endl;
    return 0;
}
