// Auto-generated module | 2026-05-13T20:48:46.570713
#include <iostream>
#include <vector>

int compute_950() {
    int base = 446;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_950() << std::endl;
    return 0;
}
