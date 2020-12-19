// Auto-generated module | 2026-05-11T19:55:56.935246
#include <iostream>
#include <vector>

int compute_167() {
    int base = 258;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_167() << std::endl;
    return 0;
}
