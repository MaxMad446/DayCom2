// Auto-generated module | 2026-05-11T22:09:57.205922
#include <iostream>
#include <vector>

int compute_569() {
    int base = 331;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_569() << std::endl;
    return 0;
}
