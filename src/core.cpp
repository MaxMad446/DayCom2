// Auto-generated module | 2026-05-12T20:52:30.642231
#include <iostream>
#include <vector>

int compute_588() {
    int base = 428;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_588() << std::endl;
    return 0;
}
