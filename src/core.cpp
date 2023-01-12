// Auto-generated module | 2026-05-13T20:27:42.155180
#include <iostream>
#include <vector>

int compute_717() {
    int base = 289;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_717() << std::endl;
    return 0;
}
