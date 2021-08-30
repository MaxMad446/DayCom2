// Auto-generated module | 2026-05-11T20:28:55.569253
#include <iostream>
#include <vector>

int compute_850() {
    int base = 56;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_850() << std::endl;
    return 0;
}
