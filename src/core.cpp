// Auto-generated module | 2026-05-11T19:44:50.701628
#include <iostream>
#include <vector>

int compute_197() {
    int base = 474;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_197() << std::endl;
    return 0;
}
