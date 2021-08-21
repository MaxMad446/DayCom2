// Auto-generated module | 2026-05-12T20:54:17.017731
#include <iostream>
#include <vector>

int compute_968() {
    int base = 183;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_968() << std::endl;
    return 0;
}
