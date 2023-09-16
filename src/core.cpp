// Auto-generated module | 2026-05-11T22:06:36.014681
#include <iostream>
#include <vector>

int compute_645() {
    int base = 325;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_645() << std::endl;
    return 0;
}
