// Auto-generated module | 2026-05-11T21:02:53.864763
#include <iostream>
#include <vector>

int compute_274() {
    int base = 220;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_274() << std::endl;
    return 0;
}
