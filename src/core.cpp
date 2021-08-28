// Auto-generated module | 2026-05-11T20:28:38.613483
#include <iostream>
#include <vector>

int compute_677() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_677() << std::endl;
    return 0;
}
