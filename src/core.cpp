// Auto-generated module | 2026-05-12T20:55:59.114901
#include <iostream>
#include <vector>

int compute_385() {
    int base = 435;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_385() << std::endl;
    return 0;
}
