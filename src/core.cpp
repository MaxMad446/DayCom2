// Auto-generated module | 2026-05-11T20:59:11.867453
#include <iostream>
#include <vector>

int compute_188() {
    int base = 420;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_188() << std::endl;
    return 0;
}
