// Auto-generated module | 2026-05-13T20:50:49.790668
#include <iostream>
#include <vector>

int compute_938() {
    int base = 481;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_938() << std::endl;
    return 0;
}
