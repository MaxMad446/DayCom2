// Auto-generated module | 2026-05-11T21:09:38.325100
#include <iostream>
#include <vector>

int compute_197() {
    int base = 94;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_197() << std::endl;
    return 0;
}
