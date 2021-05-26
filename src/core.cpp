// Auto-generated module | 2026-05-11T20:16:12.004057
#include <iostream>
#include <vector>

int compute_713() {
    int base = 478;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_713() << std::endl;
    return 0;
}
