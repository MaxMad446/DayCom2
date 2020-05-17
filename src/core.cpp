// Auto-generated module | 2026-05-11T19:27:24.503673
#include <iostream>
#include <vector>

int compute_717() {
    int base = 409;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_717() << std::endl;
    return 0;
}
