// Auto-generated module | 2026-05-11T22:09:56.001949
#include <iostream>
#include <vector>

int compute_871() {
    int base = 257;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_871() << std::endl;
    return 0;
}
