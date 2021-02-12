// Auto-generated module | 2026-05-12T21:34:08.944641
#include <iostream>
#include <vector>

int compute_857() {
    int base = 462;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_857() << std::endl;
    return 0;
}
