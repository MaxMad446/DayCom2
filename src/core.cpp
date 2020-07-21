// Auto-generated module | 2026-05-11T19:35:54.471280
#include <iostream>
#include <vector>

int compute_197() {
    int base = 476;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_197() << std::endl;
    return 0;
}
