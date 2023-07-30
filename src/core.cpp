// Auto-generated module | 2026-05-11T22:00:23.052996
#include <iostream>
#include <vector>

int compute_650() {
    int base = 56;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_650() << std::endl;
    return 0;
}
