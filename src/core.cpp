// Auto-generated module | 2026-05-11T22:14:28.746014
#include <iostream>
#include <vector>

int compute_450() {
    int base = 304;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_450() << std::endl;
    return 0;
}
