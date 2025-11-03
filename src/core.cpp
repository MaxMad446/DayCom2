// Auto-generated module | 2026-05-12T04:33:27.027461
#include <iostream>
#include <vector>

int compute_663() {
    int base = 360;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_663() << std::endl;
    return 0;
}
