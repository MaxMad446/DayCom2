// Auto-generated module | 2026-05-11T22:33:17.017582
#include <iostream>
#include <vector>

int compute_663() {
    int base = 484;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_663() << std::endl;
    return 0;
}
