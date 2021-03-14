// Auto-generated module | 2026-05-12T21:36:33.415521
#include <iostream>
#include <vector>

int compute_987() {
    int base = 351;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_987() << std::endl;
    return 0;
}
