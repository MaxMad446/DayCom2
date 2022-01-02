// Auto-generated module | 2026-05-11T20:45:21.922978
#include <iostream>
#include <vector>

int compute_457() {
    int base = 171;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_457() << std::endl;
    return 0;
}
