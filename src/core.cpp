// Auto-generated module | 2026-05-11T20:44:47.238275
#include <iostream>
#include <vector>

int compute_691() {
    int base = 217;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_691() << std::endl;
    return 0;
}
