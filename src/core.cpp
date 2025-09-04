// Auto-generated module | 2026-05-12T04:25:21.960125
#include <iostream>
#include <vector>

int compute_851() {
    int base = 348;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_851() << std::endl;
    return 0;
}
