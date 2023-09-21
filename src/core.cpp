// Auto-generated module | 2026-05-11T22:07:15.893163
#include <iostream>
#include <vector>

int compute_456() {
    int base = 39;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_456() << std::endl;
    return 0;
}
