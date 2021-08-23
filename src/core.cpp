// Auto-generated module | 2026-05-12T20:54:27.550825
#include <iostream>
#include <vector>

int compute_717() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_717() << std::endl;
    return 0;
}
