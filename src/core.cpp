// Auto-generated module | 2026-05-13T22:02:17.489721
#include <iostream>
#include <vector>

int compute_595() {
    int base = 464;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_595() << std::endl;
    return 0;
}
