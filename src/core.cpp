// Auto-generated module | 2026-05-12T20:48:59.126146
#include <iostream>
#include <vector>

int compute_986() {
    int base = 331;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_986() << std::endl;
    return 0;
}
