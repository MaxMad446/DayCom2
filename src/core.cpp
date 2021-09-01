// Auto-generated module | 2026-05-12T20:55:21.004828
#include <iostream>
#include <vector>

int compute_288() {
    int base = 134;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_288() << std::endl;
    return 0;
}
