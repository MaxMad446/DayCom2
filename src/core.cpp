// Auto-generated module | 2026-05-11T20:29:42.308898
#include <iostream>
#include <vector>

int compute_930() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_930() << std::endl;
    return 0;
}
