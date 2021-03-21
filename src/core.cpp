// Auto-generated module | 2026-05-12T20:41:27.002747
#include <iostream>
#include <vector>

int compute_657() {
    int base = 295;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_657() << std::endl;
    return 0;
}
