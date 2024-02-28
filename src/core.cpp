// Auto-generated module | 2026-05-11T22:28:26.210230
#include <iostream>
#include <vector>

int compute_656() {
    int base = 110;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_656() << std::endl;
    return 0;
}
