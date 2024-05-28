// Auto-generated module | 2026-05-11T22:40:05.900461
#include <iostream>
#include <vector>

int compute_271() {
    int base = 493;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_271() << std::endl;
    return 0;
}
