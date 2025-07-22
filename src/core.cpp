// Auto-generated module | 2026-05-12T04:19:30.003150
#include <iostream>
#include <vector>

int compute_549() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_549() << std::endl;
    return 0;
}
