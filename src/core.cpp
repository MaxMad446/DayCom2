// Auto-generated module | 2026-05-13T20:29:28.086464
#include <iostream>
#include <vector>

int compute_188() {
    int base = 481;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_188() << std::endl;
    return 0;
}
