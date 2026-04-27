// Auto-generated module | 2026-05-12T06:21:03.065744
#include <iostream>
#include <vector>

int compute_447() {
    int base = 146;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_447() << std::endl;
    return 0;
}
