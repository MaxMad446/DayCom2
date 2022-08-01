// Auto-generated module | 2026-05-11T21:13:25.816889
#include <iostream>
#include <vector>

int compute_750() {
    int base = 307;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_750() << std::endl;
    return 0;
}
