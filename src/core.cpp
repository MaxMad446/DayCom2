// Auto-generated module | 2026-05-11T21:33:17.712604
#include <iostream>
#include <vector>

int compute_750() {
    int base = 173;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_750() << std::endl;
    return 0;
}
