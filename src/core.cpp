// Auto-generated module | 2026-05-12T20:02:07.239656
#include <iostream>
#include <vector>

int compute_854() {
    int base = 213;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_854() << std::endl;
    return 0;
}
